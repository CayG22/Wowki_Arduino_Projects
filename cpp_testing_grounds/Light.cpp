#include "Light.h"
#include<iostream>
#include<string>

Light::Light(int _pin, std::string _mode, int _value)
    : _pin(_pin), _mode(_mode), _value(_value) {}

void Light::turnOn(){
    _value = 1;
}
void Light::turnOff(){
    _value = 0;
}
   