
#include "esc.h"

ESC::ESC(byte esc_pin1, byte esc_pin2, byte esc_pin3, byte esc_pin4, byte esc_pin5, byte esc_pin6){
    escpin1 = esc_pin1;
    escpin2 = esc_pin2;
    escpin3 = esc_pin3;
    escpin4 = esc_pin4;
    escpin5 = esc_pin5;
    escpin6 = esc_pin6;
}
void ESC::calib(uint16_t calibdelay){
    ESc1.attach(escpin1);
    ESc2.attach(escpin2);
    ESc3.attach(escpin3);
    ESc4.attach(escpin4);
    ESc5.attach(escpin5);
    ESc6.attach(escpin6);

    ESc1.writeMicroseconds(2000);
    ESc2.writeMicroseconds(2000);
    ESc3.writeMicroseconds(2000);
    ESc4.writeMicroseconds(2000);
    ESc5.writeMicroseconds(2000);
    ESc6.writeMicroseconds(2000);

    delay(calibdelay);

    ESc1.writeMicroseconds(1000);
    ESc2.writeMicroseconds(1000);
    ESc3.writeMicroseconds(1000);
    ESc4.writeMicroseconds(1000);
    ESc5.writeMicroseconds(1000);
    ESc6.writeMicroseconds(1000);

    delay(calibdelay);

    arm();  
}
void ESC::arm(){

    ESc1.attach(escpin1);
    ESc2.attach(escpin2);
    ESc3.attach(escpin3);
    ESc4.attach(escpin4);
    ESc5.attach(escpin5);
    ESc6.attach(escpin6);

    ESc1.writeMicroseconds(500);
    ESc2.writeMicroseconds(500);
    ESc3.writeMicroseconds(500);
    ESc4.writeMicroseconds(500);
    ESc5.writeMicroseconds(500);
    ESc6.writeMicroseconds(500);
}
void ESC::escspeed(int esc1_speed, int esc2_speed, int esc3_speed, int esc4_speed, int esc5_speed, int esc6_speed){

    esc1speed = constrain(esc1_speed, 1040, 1960);
    esc2speed = constrain(esc2_speed, 1040, 1960);
    esc3speed = constrain(esc3_speed, 1040, 1960);
    esc4speed = constrain(esc4_speed, 1040, 1960);
    esc5speed = constrain(esc5_speed, 1040, 1960);
    esc6speed = constrain(esc6_speed, 1040, 1960);
}
