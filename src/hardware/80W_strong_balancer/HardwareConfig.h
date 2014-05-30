/*
    cheali-charger - open source firmware for a variety of LiPo chargers
    Copyright (C) 2013  Paweł Stawicki. All right reserved.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef HARDWARE_CONFIG_H_
#define HARDWARE_CONFIG_H_

#include "HardwareConfigGeneric.h"

#define MAX_CHARGE_V            ANALOG_VOLT(26.100) //25.3V  (26,1V is li43)
#define MAX_CHARGE_I            ANALOG_AMP(7.000)   //7A
#define MAX_CHARGE_P            ANALOG_WATT(80.000)               //50W

#define MAX_DISCHARGE_P         ANALOG_WATT(5.000)                //5W
#define MAX_DISCHARGE_I         ANALOG_AMP(2.000)   //should be 1A


#define CALIBRATION_SPEED                   10

//prevent power supply (>50W chargers)
//#define ENABLE_SMOOTHCURRENT ANALOG_AMP(3.000)

// http://rc-miskolc.emiter.hu/rc-miskolc/index.php?option=com_content&view=article&id=278&Itemid=205
#define IBALANCE ANALOG_AMP(0.350)  //strong balance mod by idnus

//screenanimation
#define ENABLE_SCREENANIMATION

//knightrider effect is ADC working
#define ENABLE_KNIGHTRIDEREFFECT

//use RAMCG battery icons for hitachi HD44780
#define ENABLE_RAM_CG

//audio mute function
#define ENABLE_MUTEAUDIO

//extended battery info (charge time limit)
#define ENABLE_TIME_LIMIT    

//alternative battery name
#define ENABLE_ALTERNATIVE_BATTERY_NAME


//#define ENABLE_CYCLING



#endif /* HARDWARE_CONFIG_H_ */
