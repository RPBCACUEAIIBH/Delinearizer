#include "Delinearizer.h"

float Logarithmic (float Input)
{
  return 100 - 100 / 2 * log10(100 - Input * 99 / 100);
}

float InverseLogarithmic (float Input)
{
  return 100 / 2 * log10(Input * 99 / 100 + 1);
}

float SCurve (float Input)
{
  if (Input < 50)
    return (100 / 2 * log10(Input * 99 / 100 + 1)) / ScaleILL;
  else
    return ((100 - 100 / 2 * log10(100 - Input * 99 / 100)) / ScaleILL + OffsetILL);
}
