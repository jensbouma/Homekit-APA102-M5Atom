# Homespan-APA102A-M5Atom
M5Atom Homekit Controller for APA102A adressable ledstrips
- ESP32 Controller [M5 Atom] <img src="https://camo.githubusercontent.com/ccbe7239d886d25517fe4054d1d56b386682806723bf52d7c01c5f3cbfaab51a/68747470733a2f2f6d35737461636b2e6f73732d636e2d7368656e7a68656e2e616c6979756e63732e636f6d2f696d6167652f6d352d646f63735f686f6d65706167652f636f72652f61746f6d5f6c6974655f30312e77656270" alt="M5Atom Lite" width="350" height="350">
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

## Build
- Solder the ESP SDA to the Data in and the SCL to the Clock in of the ledstrip. Check for the data direction!
- Solder the +5V and the vommon from the poweradaptor to the ledstrip and the controller.
- Re-feed the power to the strip after around every 60 leds to spread the current evenly.

## Installation

git clone https://github.com/jensbouma/Homespan-APA102A-M5Atom.git
open in VSCode with [platformio] PlatformIO extention and send to ESP

[//]: # (These are reference links used in the body of this note and get stripped out when the markdown processor does its job. There is no need to format nicely because it shouldn't be seen. Thanks SO - http://stackoverflow.com/questions/4823468/store-comments-in-markdown-syntax)

   [homespan]: <https://github.com/HomeSpan/HomeSpan>
   [m5atom]: <https://github.com/m5stack/M5Atom>
   [M5 Atom]: <https://amzn.to/3KWhmu4>
   [APA102A Leds]: <https://amzn.to/41mFc9m>
   [Power Adaptor]: <https://amzn.to/3MTSaXU>
   [fastled]: <https://github.com/FastLED/FastLED>
>
