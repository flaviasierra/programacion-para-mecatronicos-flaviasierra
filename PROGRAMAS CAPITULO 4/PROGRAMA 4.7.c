#include <stdio.h>
/* Prueba de parametros por valor. */

int f1 (int);  /*prototipo de funcion.El parametro es por valor y
            de tipo entero.*/

void main (void)
{
    int I, k = 4;
    for(I = 1; I <= 3; I++)
    {

        printf("\n\nValor de K antes de llamar a la funcion: %d", ++K);
        printf("\nValor de K despues de llamar a la funcion:%d", f1 (K));
        /* Llamada a la funcion f1. Se pasa una copia de variable K. */
}
}
int f1(int R)
{
    R += R;
    return (R);
}
