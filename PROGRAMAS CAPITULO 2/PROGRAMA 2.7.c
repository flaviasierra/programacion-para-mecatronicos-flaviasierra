#include <stdio.h>
/* VENTAS DESCENDENTES.
El programa, al recibir como datos tres valores que representan las ventas de los vendedores de una tienda de discos, escribe las ventas en orden descendente.
P, S, y R: variables de tipo real. */

void main(void)
{
  float P, S, R;

  printf("\nIngrese las ventas de los tres vendedores: ");
  scanf("%f %f %f", &P, &S, &R);
  if (P > S)
    if (S > R)
    printf("\n\n El orden es P, S y R: %8.2f %8.2f", P, S, R);
  else
    printf("\n\n El orden es P, R Y S: %8.2f %8.2f %8.2f", P, R, S);
  else
    printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S);

    if(S > R)
     if (P > R)
     printf("\n\n El orden es S, P Y R: %8.2f %8.2f %8.2f", S, P, R);
  else
    printf("\n\n El orden es S, R y P: %.2f %8.2f %8.2f", S, R, P);
  else
    printf ("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f",R, S, P);
    return 0;
}
