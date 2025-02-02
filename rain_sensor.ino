int buzzer = 13;
int waterSensor = A0;
int threshold = 2;
int input;
void setup ()
{
  pinMode(buzzer, OUTPUT);
  pinMode(waterSensor, INPUT);
  Serial.begin (9600);
}

void loop () {
  input = analogRead(waterSensor);
  Serial.println(input);
  if(input >= threshold)
  {
    digitalWrite(buzzer, HIGH);
    delay(1000);
    digitalWrite(buzzer, LOW);
    delay(1000);


  }
  else if(input < threshold)
  {
    digitalWrite(buzzer, LOW);
  }
}