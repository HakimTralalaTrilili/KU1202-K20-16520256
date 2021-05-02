void setup()
{
  Serial.begin(9600);
}

void loop()
{
  long duration, cm;
  
  pinMode(7, OUTPUT);
  digitalWrite(7, LOW);
  delayMicroseconds(2); 
  digitalWrite(7, HIGH);
  delayMicroseconds(5); 
  digitalWrite(7, LOW);
  
  pinMode(7, INPUT);
  duration = pulseIn(7, HIGH);
  cm = microsecondsToCentimeters(duration);
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(100);
}

long microsecondsToCentimeters(long microseconds) {
	
  return microseconds / 29 / 2;
}