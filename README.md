# tomato-macropad
This is my macropad that I somehow spent nearly 4 straight days on!!
I'm also documenting this journey for a youtube video, released once I assemble the real thing. 

## Features ##
128x32 OLED Display
EC11 Rotary encoder
9 Keys

## CAD Model ##
Everything fits together using 4 M3 Bolts and heatset inserts. 4 for the case and PCB. 
It has 2 separate printed pieces.<img width="966" height="665" alt="Screenshot 2026-03-31 at 00 17 22" src="https://github.com/user-attachments/assets/69b4e207-f317-4440-be9e-5ede509a5d90" />
<img width="514" height="561" alt="Screenshot 2026-03-31 at 02 07 47" src="https://github.com/user-attachments/assets/aa00908c-a84d-4fc1-9f0b-068a88d17f85" />


## PCB ##
Experimented with RGB lights, but decided not to include them due to the added complexity in tracing. I also had difficulties implementing the firmware for it. 
I may consider switching to KMK. 
<img width="661" height="454" alt="Screenshot 2026-03-31 at 02 10 03" src="https://github.com/user-attachments/assets/c952aac4-ab61-40b8-87b6-c70bb3ed34f9" />
<img width="613" height="522" alt="Screenshot 2026-03-31 at 02 09 11" src="https://github.com/user-attachments/assets/9b4d4538-fd0f-4933-93cc-f04e708e523a" />

## Firmware ##
This hackpad uses QMK firmware. 
The 4 keys currently act as macros I can change (no via support YET)
It is still a WIP, I had difficulties figuring it out and I need to learn more about QMK. 

## Bill of Materials ##

- 9x Cherry MX Switches
- 9x DSA Keycaps
- 4x M3x5x4 Heatset inserts
- 4x M3x16mm SHCS Bolts
- 9x 1N4148 DO-35 Diodes
- 1x 0.91" 128x32 OLED Display
- 1x EC11 Rotary Encoder
- 1x XIAO RP2040
