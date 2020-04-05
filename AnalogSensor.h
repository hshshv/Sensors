#ifndef AnalogSensor_h
#define AnalogSensor_h

#include "Analog.h"
#include "Arduino.h"

class AnalogSensor: public Analog
{
  public:
    AnalogSensor(byte InPin, int activatedLevel);
    AnalogSensor(byte InPin);
};

#endif
