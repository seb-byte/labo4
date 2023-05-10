#include <stdio.h>
#include <string.h>

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
