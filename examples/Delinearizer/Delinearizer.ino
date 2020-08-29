#include <Delinearizer.h>


void setup ()
{
  Serial.begin(115200); // << At 9600 you have to wait a lot for the 3000 results it spits out... ;)
  
  Serial.println(F("Logarithmic"));
  for (float i = 0; i <= 100; i += 0.1)
    Serial.println(Logarithmic(i)); // Takes a percentage (float value between 0.0 and 100.0) and returns the logarithmic equivalent in percentage.
  
  Serial.println(F("InverseLogarithmic"));
  for (float i = 0; i <= 100; i += 0.1) // Takes a percentage (float value between 0.0 and 100.0) and returns the inverse logarithmic equivalent in percentage.
    Serial.println(InverseLogarithmic(i));
  
  Serial.println(F("S-Curve"));
  for (float i = 0; i <= 100; i += 0.1)
    Serial.println(SCurve(i)); // Takes a percentage (float value between 0.0 and 100.0) and below 50% returns the inverse logarithmic, from 50% upward returns logarithmic equivalent in percentage.
}

void loop ()
{
  
}
