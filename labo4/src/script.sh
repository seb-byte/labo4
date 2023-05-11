#!/bin/bash

gcc primos/primos.c -o programa1
gcc suma/suma.c -o programa2
gcc piramide/piramide.c -o programa3
gcc cadena/cadena.c -o programa4
gcc matriz-regular/matriz-regular.c -o programa5

if [ -f programa1 ] && [ -f programa2 ] && [ -f programa3 ] && [ -f programa4 ] && [ -f programa5 ]; then
  ./programa1
  ./programa2
  ./programa3
  ./programa4
  ./programa5
  
  rm programa1 programa2 programa3 programa4 programa5
  echo "Todos los programas fueron compilados, ejecutados y se borraron sus binarios correctamente"
else
  echo "Error: Uno o mas binarios no fueron creados con exito"
fi
