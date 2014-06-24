// Basic interrupt based example.

int pin = 13;
volatile int state = LOW;
volatile int time = 0;

void setup()
{
  pinMode(pin, OUTPUT);
  attachInterrupt(0, blink, CHANGE);
  Serial.begin(9600);
}

void loop()
{
  printTime();
  Serial.println(digitalRead(2));
  delay(1000);
}

void blink()
{
  state = !state;
  digitalWrite(pin, state);
  time = millis();
}

void printTime(){
  Serial.print("Last change at: ");
  Serial.print(time);
  Serial.print(" Current time: ");
  Serial.print(millis()/1000);
  Serial.print(" : ");
} 
