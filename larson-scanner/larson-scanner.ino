const int data_pin = 2;
const int clock_pin = 3;
const int latch_pin = 4;
const int FORWARD = 0;
const int BACKWARD = 1;

int direction = 0;
int position = 0;
int delayTime = 100;
byte scanner = B10000000;

void setup()
{
  Serial.begin(9600);
  pinMode(data_pin, OUTPUT);
  pinMode(clock_pin, OUTPUT);
  pinMode(latch_pin, OUTPUT);
  direction = FORWARD;
  scanner = B10000000;
}

void loop()
{
  
  shiftDisplay(scanner);
  
  if(direction == FORWARD && position < 8) {
  	scanner = scanner >> 1;
    position = position + 1;
    delayTime = 70;
    Serial.println("forward less 8 ");
   
  }
  else if (direction == FORWARD && position == 8) {
    //change direction
    direction=BACKWARD;
    scanner = B00000010;
    delayTime = 5;
    Serial.println("forward and 8");
  }
  else if (direction == BACKWARD && position > 0) {
   scanner = scanner << 1;
   position = position -1;
	delayTime = 70;    
   Serial.println("BACKWARD greater 0");
  }
  else if (direction == BACKWARD && position == 0 ) {
   direction = FORWARD;
   scanner = B01000000;
    delayTime = 5;
   Serial.println("BACKWARD and 0");    
  }
  delay(delayTime);
  
}

void shiftDisplay(byte data) {
  digitalWrite(latch_pin, LOW);
  shiftOut(data_pin, clock_pin, LSBFIRST, data);
  digitalWrite(latch_pin, HIGH);
}

