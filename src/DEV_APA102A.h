
#include "FastLED.h"

#define NUMBER_OF_LEDS 120
#define SDA_PIN 25
#define SCL_PIN 21

CRGB leds[NUMBER_OF_LEDS];

struct DEV_APA102A : Service::LightBulb {

  int led_start;
  int led_end;
  
  SpanCharacteristic *power;
  SpanCharacteristic *H;
  SpanCharacteristic *S;
  SpanCharacteristic *V;

  DEV_APA102A(int start, int end){

    power=new Characteristic::On();
    H=new Characteristic::Hue(0);
    S=new Characteristic::Saturation(0);
    V=new Characteristic::Brightness(100);
    V->setRange(5,100,1);
  
    led_start = start;
    led_end = end;

    char cBuf[128];
    Serial.print(cBuf);
  }

  boolean update(){
    boolean p;
    float v, h, s, r, g, b;
    
    h=H->getVal<float>();
    s=S->getVal<float>();
    v=V->getVal<float>();
    p=power->getVal();

    char cBuf[128];
    sprintf(cBuf,"Updating LED: ");
    LOG1(cBuf);

    if(power->updated()){
      p=power->getNewVal();
      sprintf(cBuf,"Power=%s->%s, ",power->getVal()?"true":"false",p?"true":"false");
    } else {
      sprintf(cBuf,"Power=%s, ",p?"true":"false");
    }
    LOG1(cBuf);
      
    if(H->updated()){
      h=H->getNewVal<float>();
      sprintf(cBuf,"H=%.0f->%.0f, ",H->getVal<float>(),h);
    } else {
      sprintf(cBuf,"H=%.0f, ",h);
    }
    LOG1(cBuf);

    if(S->updated()){
      s=S->getNewVal<float>();
      sprintf(cBuf,"S=%.0f->%.0f, ",S->getVal<float>(),s);
    } else {
      sprintf(cBuf,"S=%.0f, ",s);
    }
    LOG1(cBuf);

    if(V->updated()){
      v=V->getNewVal<float>();
      sprintf(cBuf,"V=%.0f->%.0f  ",V->getVal<float>(),v);
    } else {
      sprintf(cBuf,"V=%.0f  ",v);
    }
    LOG1(cBuf);

    LedPin::HSVtoRGB(h,s/100.0,v/100.0,&r,&g,&b);

    int R, G, B;

    R=p*r*255;
    G=p*g*255;
    B=p*b*255;

    sprintf(cBuf,"RGB=(%d,%d,%d)\n",R,G,B);
    LOG1(cBuf);

    int i; 
    i = 0;

    FastLED.addLeds<APA102, 25, 21, BGR>(leds, NUMBER_OF_LEDS);
    FastLED.setBrightness(255);

    while (i < NUMBER_OF_LEDS)
    {
      if (i >= led_start && i <= led_end)
        leds[i] = CRGB(R, G, B);
      i++;
    }
    FastLED.show();   

    return(true);
  
  }
};
