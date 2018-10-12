int pin2 = 2;

int ledState = HIGH;         // the current state of the output pin
int buttonState;             // the current reading from the input pin
int lastButtonState = LOW;   // the previous reading from teh input pi


void setup()
{
  pinMode(13, OUTPUT);
  pinMode(pin2, INPUT);


  digitalWrite(13, ledState);
}

void loop()
{
  //read the current state
  int reading = digitalRead(pin2);

  if(reading != lastButtonState) {
    if(reading != buttonState) {
      buttonState = reading;
      if ( buttonState == HIGH ) {
        ledState = !ledState;
    }

  }


   digitalWrite(13, ledState);
   lastButtonState = reading;
   delay(20);
  }
}
