#include <stdio.h>
#include "Conversion.h"
#include "PrintFunc.h"

int main(void){

   const int lower = 0;
   const int upper = 300;
   const int step = 20;
   char format[] = "%3.0f %6.1f\n";

   int input;
   printf("Ingrese 1 o 2, dependiendo de la tabla de conversión que desee visualizar:\n");
   printf("1. Tabla de Fahrenheit a Celsius\n");
   printf("2. Tabla de Celsius a Fahrenheit\n");
   printf("3. Ambas\n");
   scanf( "%d", &input);

   // Método realizado para los créditos extras.
   PrintTablas(input, lower, upper, step);

   // Método realizado sin los créditos extras

   // printf("Tabla de Fahrenheit a Celsius\n");
   // for( double fahr = lower; fahr <= upper; fahr = fahr + step) {
   //    printf(format, fahr, Celsius(fahr));
   // }

   // printf("Tabla de Celsius a Fahrenheit\n");
   // for( double cel = lower; cel <= upper; cel = cel + step) {
   //    printf(format, cel, Farenheit(cel));
   // }

}

