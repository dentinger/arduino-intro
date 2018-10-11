const int led_1 = 3;
const int led_2 = 5;
const int led_3 = 6;

void setup()
{
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  

}

int limitBrightness(int brightness) {
 	if( brightness < 0 )
      return 0;
  	else if(brightness >255) 
      return 255;
    else 
      return brightness;
}

void loop()
{
  int brightness_1;
  int brightness_2;
  int brightness_3;
  
  //increase led brightness at different rates
  for(int i =0; i <395; i++) {
   	brightness_1 = i; 
    brightness_2 = i - 70;
    brightness_3 = i - 140;
    
    brightness_1 = limitBrightness(brightness_1);
    brightness_2 = limitBrightness(brightness_2);
    brightness_3 = limitBrightness(brightness_3);
    analogWrite(led_1, brightness_1);
    analogWrite(led_2, brightness_2);
    analogWrite(led_3, brightness_3);
    
    delay(50);
  }
     
}
