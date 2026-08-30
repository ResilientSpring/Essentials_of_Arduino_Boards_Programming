// obtaining two different delays
// LED1 delay is 400 ms (400 ms on, 400 ms off)
// LED2 delay is 500 ms (500 ms on, 500 ms off)
// This example uses the array

const int LED1 = 8;
const int LED2 = 9; 
int LED1State=HIGH;
int LED2State=HIGH;
int k = 0;

int LED1Array[] = {1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1};
int LED2Array[] = {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0};

void setup(){

    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);

    digitalWrite(LED1, LED1State);
    digitalWrite(LED2, LED2State);

}