#include <stdio.h>
/**
*La función le solicita al usuario el valor de n que este quería para generar así la pirámide
*de números. Para generar la pirámide se utilizaron dos for anidados para poder generar las filas
*como se requería para lograr imprimir la pirámide, también fue necesario el uso de la funci´on
*printf al igual que el /n para cambiar de línea.
*/
int main() {
    int n, fila, columna, num;
    printf("Digite el valor de n para generar la pirámide: ");
    scanf("%d", &n);
    for(fila = 1; fila <= n; fila++) {
        num = fila;
        for(columna = 1; columna <= 2*n-1; columna++) {
            if(columna >= n-(fila-1) && columna <= n+(fila-1)) {
                printf("%2d", num);
                if(columna < n) {
                    num++;
                } else {
                    num--;
                }
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
