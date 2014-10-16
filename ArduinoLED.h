

/*

*/

#ifndef ArduinoLED_H
#define ArduinoLED_H


#include "Arduino.h"

class ArduinoLED {

  public: 
    
    uint8_t state;
    uint8_t pin;
    ArduinoLED(uint8_t apin); //the constructor

    void on();
    void off();
    void pwm(uint8_t p);
    void pulse(unsigned int aduration);
    void update();
    
  private:
  
}; //end of class ArduinoLED



#endif
