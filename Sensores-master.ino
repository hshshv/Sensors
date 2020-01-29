#include "Sensors.h"

DigitalSensor PIR(9);
AnalogSensor Potentiometer(0, 512);
UltrasonicSensor mysensor(9,10);
void setup() 
{
  
}

void loop() 
{
  if(PIR.Activated() || Potentiometer.Activated())
  {
    delay(Potentiometer.Get());
  }
}
