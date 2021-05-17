# Compilador

El compilador GGC puede realizar el proceso de compilación en distintos pasos.

Se describen a continuación los pasos del proceso de compilación y luego se detallan como se consigue cada instancia del proceso.

1. Pre-proceso
   
   * Se ejecuta el siguiente comando para obtener el archivo .i
   
   - gcc -E hello2.c > hello2.i

2. Compilación

   *  Se compila el archivo pre-procesado para obtener el archivo emsablador para un procesador en específico (en este caso se utilizó Intel x86)
   
   - gcc -S hello.i

3. Asembly

   *  Se convierte el archivo emsamblador en archivo objeto

   -  as -o hello.o hello.s

4. Linker

   - gcc hello.o -o hello


# Secuecnia de Pasos

   1. Preprocesador

      Se escribió el hello2. y se preprocesó hello2.c y se generó el archivo hello2.i luego se escribió la variante de hello3.c.

      La primer linea del hello3.c tiene la keyword "restrict" que es usada para declaraciones de punteros.
      Es una manera para el programador de informar una optimización que el compilador puede hacer.
         
      Se preprocesó hello3.c y se generó hello3.i.
      No hay diferencias en los archivos, solamente los comentarios del archivo hello3.i

   2. Compilador

      Se compiló y se generó hello3 luego se corrigieron los erroes en el archivo hello4.c y se generó hello4.s

      El lenguaje ensamblador es un lenguaje de bajo nivel, consisten en un conjunto de caracteres para que el procesador con su set de instrucciones interprete y ejecute, esto depende de cada arquitectura de procesador.

      Se ensambló hello4.s en hello4.o

   3. Vinculación

      Se vinculó hello4.o con la biblioteca estandar.

   4. Corrección de Bug

      Se corrigió el error del archivo hello5.c en el archivo hello6.c

   5. Remoción de prototipo

      Se escribió la nueva variante en hello7.c, se compiló arrojando dos warnings.
      El programa funciona porque la librería stdio.h es integrada automáticamente por el compilador.

   6. Compilación Separada: Contratos y Módulos

      Se escribió studio1.c y hello8.c y se generó el archivo ejecutable hello8.exe con el siguiente comando "gcc hello8.c studio1.c -o hello8 -std=c18". La compilación arrojó errores pero el ejecutable funciona correctamente.

      Se escribió la interfaz studio.h, hello9.c donde se incluye a la interfaz y por último se escribió studio2.c que es el proveedor de la interfaz. 

      La ventaja de incluir el contrato en los clientes y en el proveedor es poder tener un mayor control y detectar los errores antes, así como también poder distribuir las funciones de los proveedores a otros clientes que necesiten utilizarlos.

# Crédito extra

Las bibliotecas son un conjunto de implementaciones funcionales, codificadas en un lenguaje de programación. Estas se pueden distribuir y son portables. Las ventajas son que el programador se ahorra la implementación de muchas funciones que ya fueron optimizadas ahorrando al programadador tiempo pero la desventaja es que al importar una librería y solo estar utilizando solamente por ejemplo una función de la misma se importa toda la librería entera además estas funciones en ciertos lenguajes son inmutables, osea que no se pueden modificar.
