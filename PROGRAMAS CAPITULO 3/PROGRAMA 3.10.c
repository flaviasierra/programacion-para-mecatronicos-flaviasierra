#include <stdio.h>
#include <math.h>

int main(void)
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;
    printf("Ingrese el numero de datos que se van a procesar:\t ");
    scanf("%d", &N);
    if (N > 0)
    {
        for (I=1; I<=N; I++)
        {
            printf("\nINgrese el numero %d: ", I);
            scanf("%d", &NUM);
            if (NUM)
                if (pow(-1, NUM)> 0)
                SPA = SPA + NUM;
            else
            {
                SIM= SIM+NUM;
                CIM++;
            }
        }
        printf("\n Ls suma de los numero pares es: %d", SPA);
        printf("\n El promedio de numero impares es: %5.2f", (float)(SIM/CIM));
    }
    else
        printf("\n El valor de N es incorrecto");

}
