#include <stdio.h>
#include <string.h>

int main(void)
{
    char cad1[50], cad2[50], cad0[50];
    int i = 0;

    printf("\n Ingrese la primera cadena de caracteres:

    fgets(cad1, 50, stdin);

    printf("\n Ingrese la cadena a buscar: ");


    fgets(cad2, 50, stdin);

    strcpy(cad0, cad1);

    char *cad0_ptr = cad0;

    while ((cad0_ptr = strstr(cad0_ptr, cad2)) != NULL)
    {
        i++;
        cad0_ptr++;
    }
    printf("\nEl numero de veces que aparece la segunda cadena es: %d", i);

    return 0;
}
