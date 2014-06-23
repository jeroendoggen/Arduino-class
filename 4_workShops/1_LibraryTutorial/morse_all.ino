#include <Morse.h>

Morse morse(13);

void setup()
{
}

void loop()
{
  // Confusing
  morse.dot(); morse.dot(); morse.dot();
  morse.dash(); morse.dash(); morse.dash();
  morse.dot(); morse.dot(); morse.dot();
  delay(3000);
  
  // Seems to be easy to read
  morse.letter_s();
  morse.letter_o();
  morse.letter_s();
  delay(3000);
  
  // My grandmother would understand this
  morse.sos();
  delay(3000);
}

