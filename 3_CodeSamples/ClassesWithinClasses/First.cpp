#include "First.h"
#include <Arduino.h>

First::First(int newNumber) : widget(2)
{
  itsNumber = newNumber;
}

int First::getNumber()
{
  return itsNumber;
}

int First::getNumberOfSecond()
{
  return (widget.getNumber());
}

int First::getSumOfNumbers()
{
  return (itsNumber + getNumberOfSecond());
}





