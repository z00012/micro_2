int led=9;
int led2=13;
void setup(){
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(led2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
digitalWrite(led2,HIGH);
delay(5000);
digitalWrite(led,LOW);
digitalWrite(led2,LOW);
delay(500);
}
