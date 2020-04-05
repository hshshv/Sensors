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
    bool Activated();
    bool Activated(int times);
    int ActivatedLevel;
};

#endif
