const int led_1 = 3;
const int led_2 = 5;
const int led_3 = 6;

void setup()
{
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  
  analogWrite(led_1, 5);
  analogWrite(led_2, 100);
  analogWrite(led_3, 255);  
}

void loop()
{
}
