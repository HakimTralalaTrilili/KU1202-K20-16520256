
Servo servo_0;
const int servoPin = 7;
const int ledR_Pin = 2;
const int ledB_Pin = 3;
const int ledG_Pin = 4;
const int buzzPin = 8;
int pos = 0;

void setup() {
    pinMode(ledR_Pin, OUTPUT);
    pinMode(ledB_Pin, OUTPUT);
    pinMode(ledG_Pin, OUTPUT);
    pinMode(buzzPin, OUTPUT);
    servo_0.attach(servoPin);
    servo_0.write(pos);
}

void loop() {
    tone(buzzPin, 523, 500);
    digitalWrite(4, HIGH);
    for (pos=0; pos<=90; pos+=1) {
        servo_0.write(pos);
        delay(15);
    }
    delay(2000);
    digitalWrite(4, LOW);
    digitalWrite(2, HIGH);
    for (pos=90; pos>=0; pos-+1){
        servo_0.write(pos);
        delay(15);
    }
    digitalWrite(4, HIGH);
    delay(2000);
    digitalWrite(2, LOW);
}
