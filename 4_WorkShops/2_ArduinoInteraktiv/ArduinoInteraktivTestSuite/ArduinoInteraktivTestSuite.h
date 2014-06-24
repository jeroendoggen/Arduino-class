#ifndef ArduinoInteraktivTestSuite_h
#define ArduinoInteraktivTestSuite_h

#include "Arduino.h"

class ArduinoInteraktivTestSuite
{
  public:
    ArduinoInteraktivTestSuite(int pin1, int pin2, int pin3, int pin4);
    void doStuff();
  private:
    int _pushButton;
    int _lightSensor;
    int _piezoSensor;
    int _focus;
    int _shutter;
};

#endif


