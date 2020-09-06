#include "Analog.h"

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

float Analog::GetPercentage()
{
  return(map(GetAvg(), 0, 1023, 0, 100)); 
}

bool Analog::Activated()
{
  return (Get() >= Minimum && Get() <= Maximum);
}

bool Analog::Activated(int times)
{
  return(Get(times) >= Minimum && <= Maximum);
}
