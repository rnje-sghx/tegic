# Tegic (libtegic + tegic)
T9 Predictive Text Algorithm C++ Implementation

## Description
T9, which stands for Text on 9 keys, is a USA-patented predictive text technology for mobile phones 
(specifically those that contain a 3x4 numeric keypad), originally developed by Tegic Communications, 
now part of Nuance Communications.

T9 was used on phones from Verizon Wireless, NEC, Nokia, Samsung Electronics, Siemens, Sony Ericsson, 
Sanyo, Sagem and others. It was also used by Texas Instruments PDA Avigo during the late 1990s. Its
main competitors are iTap created by Motorola, SureType created by RIM, Eatoni's LetterWise and WordWise, 
and Intelab's Tauto.

## Algorithm
In order to achieve compression ratios of close to 1 byte per word, T9 uses an optimized algorithm which 
maintains the order of words, and partial words (also known as stems) but because of this compression, 
it over-generates words which are sometimes visible to the user as "junk words". This is a side effect of 
the requirements for small database sizes on the lower end embedded devices.

## License
```
Copyright 2016, Ranjeet Singh - ranjeet@raeoks.com

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
```
