// Connect SCL pin of LCD to SCL pin of Arduino
// Connect SDA pin of LCD to SDA pin of Arduino
// Connect the VCC pin of LCD to +5 V of Arduino
// Connect the GND pin of LCD to ground of Arduino

int Address = 0x27;

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
// http:// www.arduino.cc/reference/en/libraries/LiquidCrystal_I2C

LiquidCrystal_I2C lcd(Address, 16, 2);
int i = 0;
