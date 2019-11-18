/* 
 *  Laboratorio 7 - Control de Intensidad Pot
 *  
 *  Adrian Franco 8-931-45
 *  Christian Espinoza 8-909-654
 *  Jaimenrique Chan 8-930-1956
 *  
 */

int valor_pot;
int pin_1=10;
int pin_2=11;
int pin_3=12;
int pin_4=13;



void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(pin_1,OUTPUT);
pinMode(pin_2,OUTPUT);
pinMode(pin_3,OUTPUT);
pinMode(pin_4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
valor_pot=analogRead(0);

Serial.println("el valor es=");
Serial.println(valor_pot);

if(valor_pot<=255){
  digitalWrite(pin_1,HIGH);
  digitalWrite(pin_2,LOW);
   digitalWrite(pin_3,LOW);
    digitalWrite(pin_4,LOW); 
}

if(valor_pot<=511 && valor_pot>=256){
  digitalWrite(pin_1,LOW);
  digitalWrite(pin_2,HIGH);
   digitalWrite(pin_3,LOW);
    digitalWrite(pin_4,LOW); 
}

if(valor_pot<=767 && valor_pot>=512){
  digitalWrite(pin_1,LOW);
  digitalWrite(pin_2,LOW);
   digitalWrite(pin_3,HIGH);
    digitalWrite(pin_4,LOW); 
}

if(valor_pot<=1023 && valor_pot>=768){
  digitalWrite(pin_1,LOW);
  digitalWrite(pin_2,LOW);
   digitalWrite(pin_3,LOW);
    digitalWrite(pin_4,HIGH); 
}




}
