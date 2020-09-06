#include "AnalogSensor.h"

AnalogSensor::AnalogSensor(byte inPin, int activatedLevel)
{
  InPin = inPin;
  Minimum = activatedLevel;
}

AnalogSensor::AnalogSensor(byte inPin):AnalogSensor(inPin, 512)
{
  
}
