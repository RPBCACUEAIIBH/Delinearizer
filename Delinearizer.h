#ifndef Delinearizer_H
#define Delinearizer_H

#include <Arduino.h>

#define ScaleILL 1.703
#define OffsetILL 100-(100-100/2*log10(1))/ScaleILL

float Logarithmic (float Input);
float InverseLogarithmic (float Input);
float SCurve (float Input);

#endif
