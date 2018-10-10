int fizzpin = 13;
int buzzpin = 12;
int fizzbuzzpin = 11;
int neitherpin = 10;

int x = 1;

void setup()
{
  pinMode(fizzpin, OUTPUT);
  pinMode(buzzpin, OUTPUT);
  pinMode(fizzbuzzpin, OUTPUT);
  pinMode(neitherpin, OUTPUT);
  
}

void turnoff() {
  digitalWrite(fizzbuzzpin, LOW);  
   digitalWrite(buzzpin, LOW);  
   digitalWrite(fizzpin, LOW);  
   digitalWrite(neitherpin, LOW);  
}

void loop()
{
  turnoff();
  
  if((x % 5 == 0) && (x % 3 == 0)) {
    digitalWrite(fizzbuzzpin, HIGH);
    digitalWrite(fizzpin, HIGH);
    digitalWrite(buzzpin, HIGH);
  } 
  else if (x % 3 == 0) {
     digitalWrite(fizzpin, HIGH);
  }
  else if (x % 5 == 0) {
     digitalWrite(buzzpin, HIGH);
  }
  else {
     digitalWrite(neitherpin, HIGH);
  }
  x = x + 1;
  delay(500); // Wait for 1000 millisecond(s)
}
