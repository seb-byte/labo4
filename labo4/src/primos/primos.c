#include <stdio.h>

#include <stdio.h>

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

