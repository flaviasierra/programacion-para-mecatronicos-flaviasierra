#include <stdio.h>
#include <math.h>
/*suma cuadrados.
el programa, al recibir como datos un grupo de enteros positivos, obtiene el
cuadrdo de los mismos y la suma correspondiente a dichos cuadrados*/

void main(void)
{
    int NUM;
    long CUA, SUC = 0;
    printf("\nIngrese un unumero entero entero -0 para terminar-:\t");
    scanf("%d", &NUM);
    while(NUM)
        /*Observa que la condicion es verdadera mientras el entero es diferente de cero.*/
    {
        CUA = pow (NUM, 2);
        printf("\nIngrese un numero entero -0 para terminar-:\t");
        scanf("%d", &NUM);

    }
    printf("\nLa suma de los cuadrados es %1d",SUC);
    return 0;
}
