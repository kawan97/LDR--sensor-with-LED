  
/* Interfacing LDR with Arduino UNO*/

int ldrPin = A0;//Set A0                              (Analog Input) for LDR.
int ledPin = 13; // digital pin 13 

int value=0;
void setup() {
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
}

void loop() 
{
value = analogRead(ldrPin);//Reads the Value of LDR(light).
Serial.println("LDR value is :");//Prints the value of LDR to Serial Monitor.
Serial.println(value);
if(value>300)
  {
    digitalWrite(ledPin,LOW);//Makes the LED glow in Dark.
  }
  else
  {
    digitalWrite(ledPin,HIGH);//Turns the LED OFF in Light.
  }
}
