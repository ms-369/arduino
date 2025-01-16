#define ANALOG_INPUT A0
int input = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ANALOG_INPUT, INPUT);//not necessary as analogue is ony for input
 Serial.println("reading input voltage");
}

void loop() {
  // put your main code here, to run repeatedly:
  input = analogRead(ANALOG_INPUT);
  Serial.println(input);
  delay(100);
}
