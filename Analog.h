#ifndef Analog_h
#define Analog_h

#include "Sensor.h"
#include "Arduino.h"

class Analog: public Sensor
{
  public:
    float Get();
    float Get(int times);
    float GetAvg();
    float GetPercentage();
    bool Activated();
    bool Activated(int times);
    void MapResult(int newRangeStart, int newRangeEnd);
    int Minimum;
    int Maximum;
  private:
    int rangeStart = 0;
    int rangeEnd = 1023;
};

#endif
