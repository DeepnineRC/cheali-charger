Welcome to cheali-charger!
==========================

This fork is for personal use. Feel free to use it but there might be errors.
I develop this for my own charger to suit my needs. If you have an idea just add a comment or send my a email deepnine at gmx de

I try to keep up with merging changes from the orginal project.

If you want an always-working version use: ttps://github.com/stawel/cheali-charger

- New menu screen added ("battery id") after program selection, 300 different batterie selectable. up to 65000 possible (need changes in source).
- Logging with new frame (frame id 9): $9;program;timestamp;battery_id;crc 
  The new 9 frame is sent at the first 30 secondes and then only once every 60 seconds.
  
Todo:

-send the complete program with the 9 frame
-setting in uart to switch on/off the 9 frame, to be compatible with logger software
-setting on/off for the batter id feature
-setting in battery menu to switch offbattery id for single programms.

This project is an alternative firmware for a variety of lipo chargers,  
see [hardware.](README.md#hardware)

Don't use it if You don't need to  
(not everything is implemented yet).  
