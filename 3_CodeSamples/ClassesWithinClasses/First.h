#ifndef First_h
#define First_h

#include "Second.h"

class First
{
  public:
    First(int newNumber);
    int getNumber();
    int getNumberOfSecond();
    int getSumOfNumbers();
  private:
    int itsNumber;
    Second widget;
};
#endif
