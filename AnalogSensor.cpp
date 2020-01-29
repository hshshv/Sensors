#include "AnalogSensor.h"

AnalogSensor::AnalogSensor(byte inPin, byte activatedLevel)
{
  InPin = inPin;
  ActivatedLevel = activatedLevel;
  pinMode(InPin, INPUT);
}
int AnalogSensor::Get()
{
  return (analogRead(InPin));
}

bool AnalogSensor::Activated()
{
  return (Get() >= ActivatedLevel);
}
