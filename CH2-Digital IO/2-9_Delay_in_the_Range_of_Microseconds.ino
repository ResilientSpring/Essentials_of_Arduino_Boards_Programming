int pin = 2;

void setup(){

    pinMode(pin, OUTPUT);  // sets the digital pin as output

}


void loop(){

    digitalWrite(pin, HIGH);
    delayMicroseconds(1000);
    digitalWrite(pin, LOW);
    delayMicroseconds(1000);

}