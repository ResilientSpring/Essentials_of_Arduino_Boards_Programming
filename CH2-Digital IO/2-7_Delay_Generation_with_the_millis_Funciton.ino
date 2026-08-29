unsigned long t0 = 0;
unsigned long t1 = 0;

void setup(){

    pinMode(LED_BUILTIN, OUTPUT);

}

void loop(){

    t0 = millis();
    digitalWrite(LED_BUILTIN, HIGH);
    while(millis() < (t0+1000) ){

    }

    t1 = millis();
    digitalWrite(LED_BUILTIN, LOW);
    while(millis() < (t1+1000)){
        
    }

}