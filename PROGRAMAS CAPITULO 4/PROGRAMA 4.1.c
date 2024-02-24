#include <stdio.h>
/* CUBO-1.
El programa calcula el cubo de los 10 primeros numeros naturales con la ayuda de una funcion. En la solucion del
problema se utiliza una variable global, aunque esto, como veremos mas adelante, no es muy recomendable*/


int cubo(void);   /*prototipo de funcion*/
int I             /* variable global.*/

void main (void)
{
int CUB;
for (I =1; I <= 10; I ++)
{
    CUB = cubo();               /*llamada a la funcion cubo*/
    printf("\nEl cubo de % es: %d", I, CUB);
}
}
int cubo (void)    /* Declaracion de la funcion*/
/* La funcion calcula el cubo de la variable global I. */
{

    return (I*I*I);

}


