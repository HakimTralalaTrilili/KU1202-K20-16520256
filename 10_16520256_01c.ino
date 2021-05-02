int counter;

void setup()
{
  pinMode(13, OUTPUT);
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
}