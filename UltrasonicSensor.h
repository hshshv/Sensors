#ifndef UltrasonicSensor_h
#define UltrasonicSensor_h

#include "Analog.h"
#include "Arduino.h"

class UltrasonicSensor : public Analog
{
  private:
    int TrigPin;
    int EchoPin;
  public:
    UltrasonicSensor(int Trig, int Echo);
    UltrasonicSensor();
    void SetPins(int Trig, int Echo);
    float Get();
    bool Blocked();
    bool Blocked(int times);
};
#endif
