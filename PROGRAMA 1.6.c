#include <stdio.h>

/* Aplicacion de operadores. */
void main(void)
{
 int i = 15, j, k, l;
 j = ( 15 > i-- )>(14 < ++i);
printf ("\nEl valor de j es: %d");
k = ! ('b' != 'd')> (!i - l);
printf("\nEl valor de k es: %d" , k);

l = (!( 34 > (70 % 2))|| 0);
printf ("\nEl valor de 1 es: %d",l);





    return 0;
}
