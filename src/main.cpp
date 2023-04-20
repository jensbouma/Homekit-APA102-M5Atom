#include "HomeSpan.h" 
#include "M5Atom.h"

#include "DEV_APA102A.h"
#include "DEV_BUTTON.h"

void setup() {
  
  Serial.begin(115200);

  M5.begin(true, false, true);
  M5.dis.setBrightness(255);

  homeSpan.begin(Category::Bridges,"HomeSpan Bridge");

  new SpanAccessory();  
    new Service::AccessoryInformation();
      new Characteristic::Identify();

  new SpanAccessory();                                                          
    new Service::AccessoryInformation();    
      new Characteristic::Identify();               
      new Characteristic::Name("Ledstrip"); 
    new DEV_APA102A(0, 59);                                                      // Create an RGB LED attached to pins 32,22,23 (for R, G, and B LED anodes)

  new SpanAccessory();                                                          
    new Service::AccessoryInformation();    
      new Characteristic::Identify();               
      new Characteristic::Name("Ledstrip 2"); 
    new DEV_APA102A(60, 120);                                                      // Create an RGB LED attached to pins 32,22,23 (for R, G, and B LED anodes)

  new SpanAccessory();                                                          
    new Service::AccessoryInformation();
      new Characteristic::Identify(); 
      new Characteristic::Name("PushButton Switches");
    new DEV_Button(39,1);       // create Stateless Programmable Switch Service on pin 23 with index=1


    


} // end of setup()

//////////////////////////////////////

void loop(){
  
  homeSpan.poll();
  
} // end of loop()

