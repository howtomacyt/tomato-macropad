# Log
**I didn't journal the design process when I made this macropad as part of Blueprint. 
I now have the PCB and the hackpad kit arrived, so I am finishing the build.**
### Total Hours (For Building) - 9
### Time spent on design - approx. 14

## 9 July
I just got the PCB - was not expecting this, as the JLCPCB website was not very helpful with tracking. 

I started by testing the hackpad enclosure - turns out I didn't make the bottom thick enough, because the heat-set insert made a hole through the bottom of the plastic. ![image](https://cdn.hackclub.com/019f4c8c-d441-7679-b771-2ffc41d6079b/IMG_4019.jpeg)
Speaking of which they're pretty satisfying to push in. 

The bottom of the PCB has pins sticking out of it (such as from the MCU). Therefore, I had to make some holes to account for this, so the pcb could lie flat. (Before and after)
![image](https://cdn.hackclub.com/019f4c8c-ff13-7bed-9ba4-6deeccf8f1cc/.jpeg)
I also made some changes to the usb-c port to adjust for its position, as it wasn't lined up: 
![image](https://cdn.hackclub.com/019f4c8d-9ae8-7bc5-890e-9d0450536cb9/IMG_4015.jpeg)


I started soldering the switches/diodes on. I think I may have ingested some fumes, but soldering is pretty satisfying! This took quite a bit of time - I didn't want to make any mistakes and ruin parts, as it was my first time. 
![image](https://cdn.hackclub.com/019f4c91-3610-725d-8be6-1594c64c8771/IMG_4014%202.jpeg)

### Hours: 3

## 10 July 
Spent **4 hours today testing the macropad**. I didn't want to waste all of my switches before I was sure that it'd work, as de-soldering them would be a challenge to say the least (I just learnt how to solder..). 

I was sorta having a breakdown as none of the key presses were being detected, and I tried with multiple languages... 

Somehow the problem was just because I had misunderstood the pinout, becauase there are multiple of them??? Previous me didn't realise that which caused me lots of unnecessary pain. 
![image](https://cdn.hackclub.com/019f4c8d-fd2c-7391-816c-f4f4a8f65db0/Screenshot%202026-07-10%20at%2023.50.05.png)

I also had difficulties connecting to the RP2040, because connecting my cable to one port on my computer wouldn't yield the same result as another port, or at least that's what I remember. 

I tried restarting my computer, to see if that would make it detect the rp2040's disk. I finally found a fix (pressing the tiny Bootloader button then releasing it once the cable was plugged in) but it took me a while. 

I thorugh it looked too bare-bones, which is when I realised I didn't have a knob for the encoder (that's why...) 
![image](https://cdn.hackclub.com/019f4c93-297f-7567-b659-0f5c5be081ae/Screenshot%202026-07-11%20at%2000.08.50.png)
So I made one real quick. 

I'm now finally done assembling and uploading the firmware - the macropad is fully functional!!! 

### Hours: 6

