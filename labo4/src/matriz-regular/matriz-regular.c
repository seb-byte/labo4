#include <stdio.h>

int main() {
  int matriz[3][3];
  int i, j;
  int det;

  printf("Ingrese una matriz 3x3: \n");

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  det = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]) -
        matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]) +
        matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);

  if (det != 0) {
    printf("La matriz es regular.\n");
    printf("El determinante de la matriz es: %d.\n", det);
  } else {
    printf("La matriz no es regular, su determinante es: %d.\n", det);
  }

  return 0;
}
