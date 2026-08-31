int pushButton=9;

void setup(){

    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(pushButton, INPUT);

}

void loop(){

    digitalWrite(LED_BUILTIN, digitalRead(pushButton));

}