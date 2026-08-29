const int LED = LED_BUILTIN;

void setup(){

    pinMode(LED, OUTPUT);

}

void loop(){

    digitalWrite(LED, true);
    delay(1000);
    digitalWrite(LED, false);
    delay(1000);

}
