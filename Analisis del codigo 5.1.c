/*
   BubbleSort C
*/   /*bubblesort c indica que este codigo es una implementacion del algoritmo bubble sort c*/
#include <stdio.h>
#include <time.h>
/*en estas lineas del codigo se ve el manejo del tiempo(time) que se necesita para las funciones de generacion de
numeros al
*/



#define ARRAY_SIZE 10/* ARRAY_SIZE 10 se utiliza para poner el tamaño del arreglo que se va a ordenar, un arreglo se utiliza para almacenar
 multiples valores de un mismo tipo,
y se crea una entrada a este accediendo a un indice, de esta forma todo esta mas organizado*/



int i;
int change;
int n;
int a[ARRAY_SIZE];
int buf;
time_t seed;
/*estas son una serie de variables necesarias para el algoritmo,
se utiliza (i) para iteracones(repeticion de una parte del codigo)
change ordenado este bucle o repeticion.
Con (n) se almacena el tamaño del arreglo
Con (a) se selecciona el arreglo a ordenar.
Con (buf se intercambian valores y con (seed) para generar numeros al azar*/


int main(int argc, char* argv/*define la funcion principal de cualquier tipo de
         programa en C.*/
{
  seed = 0;
  srand(time(&seed));/*Esta linea inicia el generador de numeros al azar*/


  n = sizeof(a) / sizeof(*a);/* calcula el numero de elementos en el arreglo
  (a)*/
  for (i = 0; i <= n-1; i++)
  {
    a[i] = rand() % 1000;
  } /*esto llena el arreglo (a) con numeros al azar entre el 0 y 999*/



  for (i = 0; i <= n-1; i++)
  {
    printf("Element a[%d]: %d\n", i, a[i]);
  }
  /*imprime los elementos del arrglo antes de que se ordenarlos*/

  change = 1;
  while (change == 1)
  {
    change = 0; /*change en 1 es para entrar en un bucle y despues
    en 0 para ver si existen cambios en el transcurso de la iteracion*/

    for (i = 0; i <= n-2; i++)
    {
      if (a[i] > a[i+1])
      {
        buf = a[i];
        a[i] = a[i+1];
        a[i+1] = buf;
        change = 1;
      }
    }

  /* esto es un bucle de ordenamiento bubble sort. este intercambia elementos si estos
  estan en orden incorrecto.*/

  printf("\n----------------\n");/* imprime una linea separadora*/
  for (i = 0; i <= n-1; i++)
  {
    printf("Element a[%d]: %d\n", i, a[i]);
  }/* imprime los elelmentos del arreglo despues de que los ordena*/
  return 0;
}/*termina la funcion de main y devuelve 0*/
