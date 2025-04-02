#include <PiCoLabSensors.h>
#include <Wire.h>

void writeinto7segment(int x){
    Wire.beginTransmission(0x21); // transmit to PCF8574
    switch (x) {
        case 0: Wire.write(0x3F); break; // 0
        case 1: Wire.write(0x06); break; // 1
        case 2: Wire.write(0x5B); break; // 2
        case 3: Wire.write(0x4F); break; // 3
        case 4: Wire.write(0x66); break; // 4
        case 5: Wire.write(0x6D); break; // 5
        case 6: Wire.write(0x7D); break; // 6
        case 7: Wire.write(0x07); break; // 7
        case 8: Wire.write(0x7F); break; // 8
        case 9: Wire.write(0x6F); break; // 9
    }
    Wire.endTransmission();    // stop transmitting
}

void clear7segment(){
    Wire.beginTransmission(0x21); // transmit to PCF8574
    Wire.write(0x00); // clear the display
    Wire.endTransmission();    // stop transmitting
}