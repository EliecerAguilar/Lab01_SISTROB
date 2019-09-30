int rojo=12;
int amarillo=10;
int verde=8;

void setup() {
  // put your setup code here, to run once:
  pinMode (rojo, OUTPUT);
  pinMode (amarillo, OUTPUT);
  pinMode (verde, OUTPUT);
}
/*
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(amarillo,LOW);
  digitalWrite(verde,LOW);
  digitalWrite(rojo,HIGH);
  delay(1000);
  
  digitalWrite(rojo,LOW);
  digitalWrite(verde,LOW);
  digitalWrite(amarillo,HIGH);
  delay(1000);
  
  digitalWrite(rojo,LOW);
  digitalWrite(amarillo,LOW);
  digitalWrite(verde,HIGH);
  delay(1000);
}*/


void loop() {
  // put your main code here, to run repeatedly:
int x;

  digitalWrite(rojo,LOW);
  digitalWrite(amarillo,LOW);
  digitalWrite(verde,HIGH);
  delay(5000);

  for(x=0;x<4;x++){ 
  digitalWrite(rojo,LOW);
  digitalWrite(amarillo,LOW);
  digitalWrite(verde,HIGH);
  delay(500);
  digitalWrite(verde,LOW);
  delay(500);
  }

  digitalWrite(amarillo,LOW);
  digitalWrite(verde,LOW);
  digitalWrite(rojo,HIGH);
  delay(5000);
  //yesheng liu 8-912-2415
  //eliecer aguilar-
  //Luis Dominguez 

}
