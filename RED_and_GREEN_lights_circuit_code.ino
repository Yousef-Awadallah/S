int buttonPinON = 12; 
int buttonPinOFF = 11;
int LEDPinRED = 9;
int LEDPinGREEN = 10;
int status = 0;

void setup() {
  pinMode(buttonPinON,INPUT);
  pinMode(buttonPinOFF,INPUT);
  pinMode(LEDPinRED ,OUTPUT); 
  pinMode(LEDPinGREEN ,OUTPUT);
}

void loop()  {
  if( digitalRead(buttonPinON) == LOW )  {
     status = 1;
}

  if ( digitalRead(buttonPinOFF) == LOW ) {
     status = 0;
  }

  
  if(status == 1)  {
     digitalWrite(LEDPinRED ,HIGH);
     digitalWrite(LEDPinGREEN ,LOW);
  }
  else if (status == 0)  {
     digitalWrite(LEDPinGREEN ,HIGH);
     digitalWrite(LEDPinRED ,LOW);
  }

}
