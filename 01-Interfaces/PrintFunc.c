#include <stdio.h>
#include "PrintFunc.h"
#include "Conversion.h"

void PrintFila(double temp, double (*function)(double)) {
   const char format[] = "%-10.0f %-10.1f\n";
   printf(format, temp, function(temp));
}

void PrintFilas(int lower, int upper, int step, double (*function)(double)) {
   for( double temp = lower; temp <= upper; temp = temp + step) {
      PrintFila(temp, function);
   }
}

void PrintTabla(int lower, int upper, int step, double (*function)(double)) {
   PrintFilas(lower, upper, step, function);
}

void PrintTablas(int input, int lower, int upper, int step) {
   switch (input) {
      case 1:
         printf("Tabla de Farenheit a Celcius: \n");
         printf("----------------------------- \n");
         printf("%-10s%-10s \n", "Farenheit | ", "Celcius");
         PrintTabla(lower, upper, step, Farenheit);
         break;
      case 2:
         printf("Tabla de Celcius a Farenheit: \n");
         printf("----------------------------- \n");
         printf("%-10s%-10s \n", "Celcius | ", "Farenheit");
         PrintTabla(lower, upper, step, Celsius);
         break;
      case 3:
         printf("Tabla de Farenheit a Celcius: \n");
         printf("----------------------------- \n");
         printf("%-10s%-10s \n", "Farenheit | ", "Celcius");
         PrintTabla(lower, upper, step, Farenheit);
         printf("Tabla de Celcius a Farenheit: \n");
         printf("----------------------------- \n");
         printf("%-10s%-10s \n", "Celcius | ", "Farenheit");
         PrintTabla(lower, upper, step, Celsius);
         break;
      default:
         printf("No se seleccionó un código correcto.");
         break;
   }
}