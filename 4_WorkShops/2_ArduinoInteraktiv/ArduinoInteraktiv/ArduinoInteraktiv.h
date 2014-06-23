#ifndef ArduinoInteraktiv_h
#define ArduinoInteraktiv_h

#include "Arduino.h"

class ArduinoInteraktiv
{
  public:
    ArduinoInteraktiv(int pin1, int pin2, int pin3, int pin4);
    void doStuff();
  private:
    int _pushButton;
    int _lightSensor;
    int _piezoSensor;
    int _focus;
    int _shutter;
};

#endif


