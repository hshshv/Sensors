#include "Analog.h"

void Analog::SetLevel(int NewLevel)
{
  ActivatedLevel = NewLevel;
}
    
float Analog::Get()
{
  return (analogRead(InPin));
}

float Analog::GetAvg()
{
  return (Get(5));
}

float Analog::Get(int times)
{
  float sum = 0;
  for (int i = 0; i < times; ++i)
  {
    sum = sum + Get();
    delay(1);
  }
  return (sum / times);
}

bool Analog::Activated()
{
  return (Get() >= ActivatedLevel);
}

bool Analog::Activated(int times)
{
  return(Get(times) >= ActivatedLevel);
}
