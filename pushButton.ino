byte butonPin=2 ;
byte ledPin=13;

byte okunanDeger=0;
byte tusabas=1 ;

void setup()
{
  pinMode(butonPin, INPUT);
  pinMode(ledPin, OUTPUT) ;
  Serial.begin(9600);
}

void loop()
{
  okunanDeger=digitalRead(butonPin);
  if(okunanDeger==1)
  {
    Serial.print("Buton Degeri: ") ;
    Serial.println(okunanDeger);
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    Serial.print("Buton Degeri: ") ;
    Serial.println(okunanDeger);
    digitalWrite(ledPin, LOW);
  }
}
