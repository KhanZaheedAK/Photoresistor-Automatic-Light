const int photoresistor = A0;
const int led = 8;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(photoresistor);

  Serial.println(lightValue);

  if (lightValue > 10) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }

}