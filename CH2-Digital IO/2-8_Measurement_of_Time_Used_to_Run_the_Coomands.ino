const int LED=LED_BUILTIN;
double t0=0;
double t1 = 0;
double t2 = 0;

void setup(){

    pinMode(LED, OUTPUT);

    Serial.begin(9600);

}

void loop(){

    t0=micros();
    digitalWrite(LED, HIGH);
    t1=micros();
    digitalWrite(LED, LOW);
    t2=micros();
    Serial.println((String)"digitalWrite(LED, HIGH) requires: "+(t1-t0)+" us.");
    Serial.println((String) "digitalWrite(LED, LOW) requires: "+(t2-t1)+" us. ");
    Serial.println();
    delay(1000);  
}