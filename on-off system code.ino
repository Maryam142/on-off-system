//Digital Analog Input
#define buttonPin 8
#define led1Pin 12
#define potPin A5
#define led2Pin 11
bool buttonStatus;
int potValue;
int ledValue;
void setup(){
 pinMode(led1Pin,OUTPUT);
 pinMode(led2Pin,OUTPUT);
 pinMode(buttonPin,INPUT);
 pinMode(potPin,INPUT);
}
void loop(){
 buttonStatus = digitalRead(buttonPin);
 if(buttonStatus == 0){
 digitalWrite(led1Pin,HIGH);
 }else{
 digitalWrite(led1Pin,LOW);
 }
 
 potValue = analogRead(potPin);
 ledValue = map(potValue,0,1023,0,255);
 analogWrite(led2Pin,ledValue);
 
 delay(100);
}