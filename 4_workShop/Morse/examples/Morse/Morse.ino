#include <Morse.h>

int pin = 13;
int threshold = 200;

Morse morse(pin, threshold);

void setup()
{
}

void loop()
{
  morse.checkLight();
  delay(3000);
}



