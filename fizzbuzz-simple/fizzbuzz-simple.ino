int counter = 0;
int pin = 12;
void setup()
{
  pinMode(pin, OUTPUT);
}

void loop()
{
  
  if(counter % 3 == 0) {
	digitalWrite(pin, HIGH);
  	delay(1000); // Wait for 1000 millisecond(s)
  	digitalWrite(pin, LOW);
  	delay(1000); // Wait for 1000 millisecond(s)
  }
  if(counter % 5 == 0) {
	digitalWrite(pin, HIGH);
  	delay(250); // Wait for 1000 millisecond(s)
  	digitalWrite(pin, LOW);
  	delay(250); // Wait for 1000 millisecond(s)
   	digitalWrite(pin, HIGH);
  	delay(250); // Wait for 1000 millisecond(s)
  	digitalWrite(pin, LOW);
  	delay(250); // Wait for 1000 millisecond(s)

  }
  
  counter = counter + 1;
  delay(100);
}
