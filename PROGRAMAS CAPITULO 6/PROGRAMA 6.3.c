#include <stdio.h>
/* Universidad.
El programa, al recibir informacion sobre el numero de alumnos que han ingresado
a sus ocho diferentes carreras en los dos semestres lectivos de los ultimos
cinco a�os, obtiene informacion util para el departamento de escolar. */

const int F = 8, C = 2, P = 5;

/* Se declaran constantes para la fila, la columna y la profundidad. */

void Lectura(int [][C][P], int, int, int);
void Funcion1(int [][C][P], int, int, int);
void Funcion2(int [][C][P], int, int, int);
void Funcion3(int [][C][P], int, int, int);
/* Prototipo de funciones. Cada prototipo de funcion corresponde a uno de los
incisos. */

int main(void)
{
    int UNI[F][C][P];
    Lectura(UNI, F, C, P);
    Funcion1(UNI, F, C, P);
    Funcion2(UNI, F, C, P);
    Funcion3(UNI, F, C, P);

    return 0;
}

void Lectura(int A[][C][P], int FI, int CO, int PR)
/* La funcion Lectura se utiliza para leer un arreglo tridimensional de tipo
entero de FI filas, CO columnas y PR profundidad. Observa que al ser
tridimensional se necesitan tres ciclos para recorrer el arreglo. */

{
    int K, I, J;
    for(K = 0; K < FI; K++)
        for (I = 0; I < CO; I++)
            for (J = 0; J < PR; J++)
            {
                printf("A�o: %d\tCarrera: %d\tSemestre: %d ", K+1, I+1, J+1);
                scanf("%d", &A[K][I][J]);
            }
}

void Funcion1(int A[][C][P], int FI, int CO, int PR)
/* Esta funcion se utiliza para determinar el a�o en el que ingreso el mayor
numero de alumnos a la universidad. Observa que el primer ciclo externo
corresponde a los a�os. */
{
    int K, I, J, MAY = 0, AO = -1, SUM;
    for (K = 0; K < PR; K++)
    /* Por cada a�o se suma el ingreso de los dos semestres de las ocho carreras.*/

    {
        SUM = 0;
        for (I = 0; I < CO; I++)
            for (J = 0; J < FI; J++)
                SUM += A[J][I][K];
        if (SUM > MAY)
        {
            MAY = SUM;
            AO = K;
        }
    }
    printf("\n\nA�o con mayor ingreso de alumnos: %d Alumnos: %d", AO+1, MAY);
}

void Funcion2(int A[][C][P], int FI, int CO, int PR)
/* Esta funcion se utiliza para determinar la carrera que recibio el mayor
numero de alumnos el ultimo a�o. Observa que no se utiliza un ciclo para los
planos de la profundidad, ya que es un dato (PR). */
{
    int I, J, MAY = 0, CAR = -1, SUM;
    for (I = 0; I < CO; I++)
    {
        SUM = 0;
        for (J = 0; J < PR; J++)
            SUM += A[FI - 1][I][J];
        if (SUM > MAY)
        {
            MAY = SUM;
            CAR = I;
        }
    }
    printf("\n\nCarrera con mayor numero de alumnos el ultimo a�o: %d Alumnos: %d", CAR+1, MAY);
}

void Funcion3(int A[][C][P], int FI, int CO, int PR)
/* Esta funcion se utiliza para determinar el a�o en el que la carrera
Ingenieria en Computacion recibio el mayor n�mero de alumnos. Observa que no
se utiliza un ciclo para trabajar con las filas, ya que es un dato (FI). */
{
    int K, J, MAY = 0, AO = -1, SUM;
    for (K = 0; K < PR; K++)
    {
        SUM = 0;
        for (J = 0; J < CO; J++)
            SUM += A[J][FI - 1][K];
        if (SUM > MAY)
        {
            MAY = SUM;
            AO = K;
        }
    }
    printf("\n\nA�o con mayor ingreso de alumnos para Ingenier�a en Computaci�n: %d Alumnos: %d", AO+1, MAY);
}
