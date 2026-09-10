unsigned long t0=0;
volatile unsigned long t1=0;
bool b = false;

void setup(){

    Serial.begin(115200);
    pinMode(9, OUTPUT);
    analogWrite(9, 122);

    pinMode(2, INPUT);

    attachInterrupt(digitalPinToInterrupt(2).ISR_measureFreq.RISING);

}


void loop(){

    if(b){
        Serial.println( (String) "Freq. is: " + 1E6/(t1-t0) + " Hz. " );

        t0 = t1;

        b=false;

    }
}


void ISR_measureFreq(){
    t1=micros();
    b=true;
}