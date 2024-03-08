#include <stdio.h>
#define TAM 5
#define COL TAM
#define ROW TAM







int d1=0;
int d2=0;
int matriz[ROW][COL]=
{
    {4, 6, 5, 2, 3},
    {5, 1, 9, 8, 5},
    {4, 5, 6, 2, 3},
    {8, 6, 8, 3, 6},
    {9, 3, 4, 1, 7}
};

void dar(int matriz[][TAM], int t)
{
    int i;
    for(i = 0; i < t; i++)
    {
        printf("\nEstas en la fila %d, columna %d, que tiene el valor: %d\t(dp)", i, i, matriz[i][i]);
        d1 += matriz[i][i];
    }
}

void dar2(int matriz[][TAM], int t)
{
    int i;
    for(i = 0; i < t; i++)
    {
        printf("\nEstas en la fila %d, columna %d, que tiene el valor: %d\t(ds)", i, t - 1 - i, matriz[i][t - 1 - i]);
        d2 += matriz[i][t - 1 - i];
    }
}

void suma(int matriz[][TAM], int t)
{
    int i;
    int sum = 0;
    for(i = 0; i < t; i++)
    {
        sum = sum + matriz[i][i];
    }
    printf("\nLa suma de la diagonal principal es: %d", sum);
}

void suma2(int matriz[][TAM], int t)
{
    int i;
    int sum = 0;
    for(i = 0; i < t; i++)
    {
        sum = sum + matriz[i][t - 1 - i];
    }
    printf("\nLa suma de la diagonal secundaria es: %d", sum);
}

int main()
{
     dar(matriz, TAM);

 printf("\n");
    dar2(matriz, TAM);
     printf("\n");
      suma(matriz, TAM);
       printf("\n");
        suma2(matriz, TAM);
         printf("\n\n d1=%d", d1);
           printf("\n\n d2=%d", d2);

    return 0;
}
