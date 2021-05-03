#include "Conversion.h"

double Celsius(double f) {
   return (5.0/9.0) * (f-32);
}

double Farenheit(double c) {
   return (c*(9/5)) + 32;
}