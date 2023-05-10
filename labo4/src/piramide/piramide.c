#include <stdio.h>

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
