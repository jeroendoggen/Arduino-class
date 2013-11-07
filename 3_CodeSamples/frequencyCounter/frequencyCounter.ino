<avr/interrupt.h>

volatile boolean triggered;
volatile int counter;

ISR (ANALOG_COMP_vect)
  {
  triggered = true;
  counter++;
  }

void setup ()
  {
  Serial.begin (115200);
  Serial.println ("Started.");
  ADCSRB = 0;           // (Disable) ACME: Analog Comparator Multiplexer Enable
  ACSR =  _BV (ACI)     // (Clear) Analog Comparator Interrupt Flag
        | _BV (ACIE)    // Analog Comparator Interrupt Enable
        | _BV (ACIS1);  // ACIS1, ACIS0: Analog Comparator Interrupt Mode Select (trigger on falling edge)
   }  // end of setup

void loop ()
  {
  if (triggered)
    {
    Serial.println ("Triggered!");
    triggered = false;
    }
  }  // end of loop 
