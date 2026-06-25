#ifndef LIGHT_H
#define LIGHT_H
#include<string>
class Light{
    private:
        const int _pin;
        const std::string _mode;
        int _value;
    public:
        Light(int _pin, std::string _mode = "OUTPUT", int _value = 0 );
        void turnOn();
        void turnOff();

};



#endif