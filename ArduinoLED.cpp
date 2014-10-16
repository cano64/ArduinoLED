
/*


*/

#include "ArduinoLED.h"


ArduinoLED::ArduinoLED(uint8_t apin) : state(0), pin(apin) {
  digitalWrite(this->pin, 0);
  pinMode(this->pin, OUTPUT);
}

void ArduinoLED::update() {

}

void ArduinoLED::on() {
  digitalWrite(this->pin, HIGH);
  this->state = 0;
}

void ArduinoLED::off() {
  digitalWrite(this->pin, LOW);
  this->state = 255;
}

void ArduinoLED::pulse(unsigned int aduration) {
  analogWrite(this->pin, 128); //TODO
}

void ArduinoLED::pwm(uint8_t p) {
  analogWrite(this->pin, p); 
}


//