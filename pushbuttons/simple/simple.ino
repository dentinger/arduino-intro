int pin2 = 2;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  if( digitalRead(2) == HIGH ) {
	pin2 = pin2 +1;
  }
  if(pin2 % 2 == 0) {
   digitalWrite(13, LOW);
  }
  if(pin2 %2 == 1) {
   digitalWrite(13, HIGH);
  }
}
