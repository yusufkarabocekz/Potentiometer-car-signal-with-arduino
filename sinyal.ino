int analog = 0;
int solsinyal = 9;
int sagsinyal = 7;
int buzzer = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(solsinyal, OUTPUT);
  pinMode(sagsinyal, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{

  int potdeger;
  potdeger = analogRead(analog);
  Serial.print("POT : ");
  Serial.println(potdeger);

  if (potdeger > 624 && potdeger < 1023)
  {
    digitalWrite(solsinyal, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(500);
    digitalWrite(solsinyal, LOW);
    digitalWrite(buzzer, LOW);
    delay(500);
    
  }
  if (potdeger > 0 && potdeger < 400)
  {
    digitalWrite(sagsinyal, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(500);
    digitalWrite(sagsinyal, LOW);
    digitalWrite(buzzer, LOW);
    delay(500);
  }

}
