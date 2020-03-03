int ledPin= 13 ;
int inputPin= 3;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
}

void loop(){
  int value= digitalRead(inputPin);

  if (value == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    serial.println("LED ON");
    delay(1000) ;
  }

  else
  {
    digitalWrite(ledPin, LOW);
    serial.println("LED OFF");

delay(1000) ;
  }
}

 
