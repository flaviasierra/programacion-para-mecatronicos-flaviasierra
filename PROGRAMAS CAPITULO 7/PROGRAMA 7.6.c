#include <stdio.h>
#include <string.h>

void main(void)
{
    char *cad0 = "Hola Mexico";
    char cad1[20], cad2[20], cad3[20] = ", buenos dias!!!";
    strcpy(cad1, cad0);

    printf("\nPrueba de la funcion strcpy. Se copia la cadena cad0 a cad1:
           %s\n", cad
           strcpy(cad1, cad3);
           printf("\nPrueba de la funcion strcpy. Se copia la cadena cad3 a cad1:
                  %s\n", cad1);
                  strcpy(cad1, "XX");
                  printf("\nPrueba de la funcion strcpy. Se copia la cadena XX a cad1:
                         %s\n", cad1);
                         strncpy(cad2, cad0, 4);
