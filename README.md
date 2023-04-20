# Homespan-APA102A-M5Atom

<img src="https://github.com/jensbouma/Homespan-APA102A-M5Atom/raw/master/docs/img/result.jpg" width="350">
M5Atom Homekit Controller for APA102A adressable ledstrips

- DIY Philips Hue
- ESP32 Controller [M5 Atom]
- Apple Homekit
- APA102A addressable ledstrip

## Features
- RGB Colors
- Dimming
- Button
- Split strips in multiple lights with start and end pixel

## Tech
- [homespan] - Homespan Libary
- [m5atom] - M5 Atom Libary
- [fastled] - Fastled Libary

## Shoppinglist
- [M5 Atom]
- [APA102A Leds]
- Strong [Power Adaptor] (3.5A minimum per 60 leds)

## Installation
- git clone https://github.com/jensbouma/Homespan-APA102A-M5Atom.git
- open in VSCode with [platformio] PlatformIO extention and send to ESP

## Build
- Solder the EPS's SDA to the Data IN and the SCL to the Clock IN of the ledstrip. Check the data direction!
- Solder the +5V and the vommon from the poweradaptor to the ledstrip and the controller.
- Re-feed the power to the strip after around every 60 leds to spread the current evenly.

## Images
<img src="https://github.com/jensbouma/Homespan-APA102A-M5Atom/raw/master/docs/img/APA102.jpg" width="350">
<img src="https://github.com/jensbouma/Homespan-APA102A-M5Atom/raw/master/docs/img/purple.jpg" width="350">
<img src="https://github.com/jensbouma/Homespan-APA102A-M5Atom/raw/master/docs/img/atomproto.jpg" width="350">

[//]: # (These are reference links used in the body of this note and get stripped out when the markdown processor does its job. There is no need to format nicely because it shouldn't be seen. Thanks SO - http://stackoverflow.com/questions/4823468/store-comments-in-markdown-syntax)

   [homespan]: <https://github.com/HomeSpan/HomeSpan>
   [m5atom]: <https://github.com/m5stack/M5Atom>
   [M5 Atom]: <https://amzn.to/3KWhmu4>
   [APA102A Leds]: <https://amzn.to/41mFc9m>
   [Power Adaptor]: <https://amzn.to/3MTSaXU>
   [fastled]: <https://github.com/FastLED/FastLED>
   [platformio]: <https://platformio.org>
>
