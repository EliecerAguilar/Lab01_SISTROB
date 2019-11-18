int ledpin=2;
int ledpin1=3;
int ledpin2=4;
int ledpin3=5;
int valor_Lectura;
int pin=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
valor_Lectura= analogRead(pin);
Serial.print("El Valor es=");
Serial.print(valor_Lectura);

if(valor_Lectura<=255)
{
  digitalWrite(ledpin,HIGH);
  digitalWrite(ledpin1,LOW);
  digitalWrite(ledpin2,LOW);
  digitalWrite(ledpin3,LOW);
}
if((valor_Lectura<=511)&&(valor_Lectura>=256))
{
  digitalWrite(ledpin,LOW);
  digitalWrite(ledpin1,HIGH);
  digitalWrite(ledpin2,LOW);
  digitalWrite(ledpin3,LOW);
}
if((valor_Lectura<=767)&&(valor_Lectura>=512))
{
  digitalWrite(ledpin,LOW);
  digitalWrite(ledpin1,LOW);
  digitalWrite(ledpin2,HIGH);
  digitalWrite(ledpin3,LOW);
}
if((valor_Lectura<=1023)&&(valor_Lectura>=768))
{
  digitalWrite(ledpin,LOW);
  digitalWrite(ledpin1,LOW);
  digitalWrite(ledpin2,LOW);
  digitalWrite(ledpin3,HIGH);
}

}
