#include <stdio.h>

#include <stdio.h>

/**
*La función que se encarga de determinar si
*un número es primo, esto lo hace, analizando primero los casos de 0, 1 y 4 debido a sus condiciones
*especiales. En caso de que el número introducido no fuera ninguno de estos, se procedía a analizar
*el restante de la división del número digitado entre todos los números, empezando desde dos hasta
*llegar a la mitad del número introducido. De este modo se encuentra si el número es divisible
*por cualquier otro n´umero que no sea 1 o si mismo, determinando as´ı si el número introducido es
*primo o no
*/

int detcondición(int num_usuario);

int main(void) {
  int num_usuario;
  printf("Digite un número: \n");
  scanf("%d", &num_usuario);
  if (detcondición(num_usuario)) {
    printf("El número introducido es primo \n");
  } else {
    printf("el número introducido no es primo \n");
  }
  return 0;
}

int detcondición(int num_usuario) {
  if (num_usuario == 0 || num_usuario == 1) return 0;
  if (num_usuario == 4) return 0;
  for (int x = 2; x < num_usuario / 2; x++) {
    if (num_usuario % x == 0) return 0;
  }
  return 1;
}

