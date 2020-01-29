#ifndef AnalogSensor_h
#define AnalogSensor_h

#include "Sensor.h"

class AnalogSensor: public Sensor
{
  public:
    AnalogSensor(byte InPin, byte activatedLevel);
    int Get();
    bool Activated();
  private:
    byte ActivatedLevel;
};

#endif
