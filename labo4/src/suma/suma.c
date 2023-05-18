#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
La función le solicita tres valores al usuario
utilizando la función scanf. Empleando srand y rand se podían generar los 1000 números aleatorios.
La función srand tomaba el valor de la semilla, que en caso de ser pseudoaleatoria se emplearía
el tiempo para que siempre fuese una diferente. Por otro lado, la función rand hacía uso de los
límites escogidos para generar así los números
*/

int main() {
    int lim_inferior, lim_superior, semilla, suma = 0;
 
    printf("Digite el límite inferior: ");
    scanf("%d", &lim_inferior);
 
    printf("Digite el límite superior: ");
    scanf("%d", &lim_superior);
 
    printf("Digite la semilla o digite 0 para generarla pseudoaleatorieamente: ");
    scanf("%d", &semilla);
 
    if (semilla == 0) {
        semilla = time(NULL);
        printf("La semilla generada es: %d\n", semilla);
    }
 
    srand(semilla);
 
    for (int i = 0; i < 1000; i++) {
        int num_random = rand() % (lim_superior - lim_inferior + 1) + lim_inferior;
        if (num_random % 2 == 0) {
            suma += num_random;
        }
    }
 
    printf("La suma de los 1000 valores aleatorios entre %d y %d es: %d\n", lim_inferior, lim_superior, suma);
 
    return 0;
}
