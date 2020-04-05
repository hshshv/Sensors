#include "AnalogSensor.h"

AnalogSensor::AnalogSensor(byte inPin, int activatedLevel)
{
  InPin = inPin;
  ActivatedLevel = activatedLevel;
}

AnalogSensor::AnalogSensor(byte inPin)
{
  AnalogSensor(inPin, 512);
}
