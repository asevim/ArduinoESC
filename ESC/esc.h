#ifndef ESC_h
#define ESC_h

#include "Arduino.h"
#include "Servo.h"

class ESC{

    public:

    ESC(byte esc_pin1, byte esc_pin2, byte esc_pin3, byte esc_pin4, byte esc_pin5, byte esc_pin6);

    void calib(uint16_t calibdelay);
    void arm();
    void escspeed(int esc1_speed, int esc2_speed, int esc3_speed, int esc4_speed, int esc5_speed, int esc6_speed);

    private:

    byte escpin1, escpin2, escpin3, escpin4, escpin5, escpin6;
    int esc1speed = 1000, esc2speed = 1000, esc3speed = 1000, esc4speed = 1000, esc5speed = 1000, esc6speed = 1000;
    Servo ESc1, ESc2, ESc3, ESc4, ESc5, ESc6;


};

#endif
