#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse
{
  public:
    Morse(int pin, int threshold);
    void dot();
    void dash();
    void letter_s();
    void letter_o();
    void sos();
    void checkLight();
    void off();
  private:
    int _pin;
    int _threshold;
};

#endif


