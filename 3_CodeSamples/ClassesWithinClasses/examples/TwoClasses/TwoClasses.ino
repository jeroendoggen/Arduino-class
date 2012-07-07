#include "First.h"

First thing(1);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  Serial.print("Object's Number: ");
  Serial.print(thing.getNumber());
  Serial.println();
  
  Serial.print("Object's total Numbers: ");
  Serial.print(thing.getSumOfNumbers());
  Serial.println(); 
  Serial.println(); 
  delay(1000);
}
