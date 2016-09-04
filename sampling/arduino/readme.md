# Arduino Interface

This package includes all code for using the Arduino to sample pH probe measurements. This document represents the package log.

**Equipment**
* Arduino Uno v??
* DFRobot [Gravity:Analog pH Meter Pro](https://www.dfrobot.com/index.php?route=product/product&product_id=1110)

**Specifications**
* Serial Baud Rate 9600bps (bits per second)

TODO:
- Hello World on Arduino (done!)
- Log pH Meter data to serial port
- pH Meter calibration
- Command interface

WTFs:
https://forum.arduino.cc/index.php?topic=351999.0
"It seems that every USB serial port device is broken in El Capitan. I have a Pololu Zumo 32U4 robot based on a ATmega32U4 which uses LUFA USB (http://www.fourwalledcubicle.com/LUFA.php) and its port is now invisible too. ""

Oh no wait, I'm just an idiot. Didn't select the board port under "Tools" -> "Port".


