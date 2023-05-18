#include <stdio.h>
#include <string.h>
/**
*El programa consta de una función 
*Esta función se fija si lo introducido por el usuario era una letra,
*para esto se fijaba carácter por carácter si iba de la a la z o de A a las Z. En el caso de que si se
*cumpliera esto se revisaba si cumple con que el carácter era aeiou o AEIOU, si era alguno de esto
*se le sumaba uno al número de vocales y de lo contrario, le sumaba uno al número de consonantes.
*En el caso de detectar que no fuera una letra se contaba como dígito y se le sumaba uno a los
*dígitos.
*/
int main()
{
    char str[20];
    int vocales = 0, consonantes = 0, dígitos = 0;

    printf("Ingrese una cadena de texto menor a 20 caracteres: ");
    scanf("%[^\n]", str);

    for(int i=0; i<strlen(str); i++){
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
            if(strchr("aeiouAEIOU", str[i])){
                vocales++;
            } else {
                consonantes++;
            }
        } else if(str[i] >= '0' && str[i] <= '9'){
            dígitos++;
        }
    }

    printf("La cantidad de vocales es: %d\n", vocales);
    printf("La cantidad de consonantes es: %d\n", consonantes);
    printf("La cantidad de dígitos es: %d\n", dígitos);

    return 0;
}
