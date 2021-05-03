#include <assert.h>
#include <stdio.h>
#include "Conversion.h"

int main () {

   printf("Se realizan los test para las funciones Celcius y Farenheit \n");
   assert(Celsius(140) == 60.0);
   assert(Farenheit(80) == 112.0);
   printf("Lost tests se realizaron con exito! \n");
   return(0);
}