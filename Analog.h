#ifndef Analog_h
#define Analog_h

#include "Sensor.h"
#include "Arduino.h"

class Analog: public Sensor
{
  public:
    void SetLevel(int NewLevel);
    float Get();
    float Get(int times);
    float GetAvg();
    float GetPercentage();
    bool Activated();
    bool Activated(int times);
    int Minimum;
    int Maximum;
};

#endif
