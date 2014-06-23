#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin, int threshold)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
  _threshold = threshold;
}

void Morse::dot()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);  
}

void Morse::dash()
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}

void Morse::letter_o()
{
  dash();
  dash();
  dash();
}

void Morse::letter_s()
{
  dot();
  dot();
  dot();
}

void Morse::sos()
{
  letter_s();
  letter_o();
  letter_s();
}

void Morse::off()
{
  digitalWrite(_pin, LOW);
}

void Morse::checkLight()
{
//   if(analogRead(_pin)>_threshold)
//   {
//     sos();
//   }
//   else
//   {
//     off();
//   }
}


