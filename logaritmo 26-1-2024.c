#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x= 0.0;
    double b= 0.0;
    int ciclos;
    printf ("Te calculo tu raiz cuadrada\n") ;
    printf("digita un numero:") ;
    scanf("%1f", &x) ;

    b=x;
    while(! (b== (x/b)))
    {
        printf("\nCiclos para calculo: %d",ciclos);
        printf("\nRaiz cuadrada de %1f es: %1f", x, b);
        b= 0.5*((x/b)+ b);
        ciclos ++;
        if (ciclos>=2)
        {
            break;
        }


    }
    return 0;
}
