#include <stdio.h>
#include <stdlib.h>

int main()
{
   double x = 0.0;
   double b = 0.0;
   int ciclos = 0;

   printf("calculo raiz cuadrada!\n");
   printf("ingrese el numero: ");
   scanf("%1f", &x);

   b = x;
   while(!(b == (x/b)))
    {
        printf("\nciclos para calculo: %d",ciclos);
   printf("\nraiz cuadrada de %1f es: %1f",x,b);
   b = 0.5*((x/b) + b);
   ciclos++;
   if (ciclos>= 30)
    {
    break;
   }

}
 return 0;
}
