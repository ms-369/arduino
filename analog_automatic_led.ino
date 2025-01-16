#define LDR A0
#define LED 6
int light = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);//not necessary as analogue is ony for input
}

void loop() {
  // put your main code here, to run repeatedly:
  light = analogRead(LDR);
  Serial.println(light);
  if(light > 100)
  {
    analogWrite(LED,0);
  }
  if(light > 70 && light < 100)
  {
    analogWrite(LED,25);
  }
  if(light > 30 && light < 70)
  {
    analogWrite(LED,100);
  }
 
}
