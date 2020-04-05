#include "UltrasonicSensor.h"

UltrasonicSensor::UltrasonicSensor (int Trig, int Echo)
{
  SetPins(Trig, Echo);
}

UltrasonicSensor::UltrasonicSensor()
{
  UltrasonicSensor(4, 5);
}

void UltrasonicSensor::SetPins(int Trig, int Echo)
{
  TrigPin = Trig;
  EchoPin = Echo;
  pinMode(TrigPin, OUTPUT);
  pinMode(EchoPin, INPUT);
}

bool UltrasonicSensor::Blocked()
{
  return (Blocked(1));
}

bool UltrasonicSensor::Blocked(int times)
{
  if (ActivatedLevel > 150 || ActivatedLevel < 3)
  {
    ActivatedLevel = 10;
  }
  return (Get(times) < ActivatedLevel);
}

float UltrasonicSensor::Get()
{
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);
  return (pulseIn(EchoPin, HIGH) / 58.77);
}
