int npnPin = 7;
const int buzzpin = 8;

void setup()
{
  pinMode(npnPin, OUTPUT);
  pinMode(buzzpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  tone(buzzpin, 523, 500);
  Serial.println("Start");
  digitalWrite(npnPin, HIGH);
  delay(5000);
  Serial.println("Stop");
  digitalWrite(npnPin, LOW);
  delay(5000);
}