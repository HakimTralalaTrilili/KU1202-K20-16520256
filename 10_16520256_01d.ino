int counter = 0;

void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
    for (counter=0; counter<3; ++counter){
        digitalWrite(13, HIGH);
        delay(1000); 
        digitalWrite(13, LOW);
        delay(1000);
    }
    delay(5000);
    count += (0+1);
    Serial.print("hello world");
    Serial.println(count);
}