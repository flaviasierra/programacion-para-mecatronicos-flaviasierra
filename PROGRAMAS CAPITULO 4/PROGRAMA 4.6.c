#include <stdio.h>
/*prueba de parametros por referencia. */

void f1(int *);
/*prototipo de funcion. El parametro es de tipo entero y por referencia
observa el uso del operador de indireccion*/
void main (void)
{

    int I, K = 4;
     for  (I = 1; <= 3; I++)
    {
        printf("\n\valor de K antes de llamar a la funcion: %d", ++K);
        printf("\n\valor de K antes de llamar a la funcion: %d", f1(&K);
        /*Llamada de la funcion f1. Se pasa la direccion de la variable K,
        por medio del operador de direccion: &. */
}
}
void f1(int *R)
/* La funcion f1 recibe un parametro por referencia. Cada vez que el
parametro se utiliza en la funcion debe ir precedido por el operdor de
indireccion.*/

{
    *R += *R;
}
