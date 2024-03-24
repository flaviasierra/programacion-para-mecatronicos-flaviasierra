#include <stdio.h>
#include <string.h>

struct Alumno
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};

int main(void)
{
    struct Alumno a1, a2, a3;


    printf("Ingrese la matricula del alumno 1: ");
    scanf("%d", &a1.matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno 1: ");
    gets(a1.nombre);
    printf("Ingrese la carrera del alumno 1: ");
    gets(a1.carrera);
    printf("Ingrese el promedio del alumno 1: ");
    scanf("%f", &a1.promedio);
    fflush(stdin);
    printf("Ingrese la direccion del alumno 1: ");
    gets(a1.direccion);


    printf("Ingrese la matricula del alumno 2: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno 2: ");
    gets(a2.nombre);
    printf("Ingrese la carrera del alumno 2: ");
    gets(a2.carrera);
    printf("Ingrese el promedio del alumno 2: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);
    printf("Ingrese la direccion del alumno 2: ");
    gets(a2.direccion);


    printf("Ingrese la matricula del alumno 3: ");
    scanf("%d", &a3.matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno 3: ");
    gets(a3.nombre);
    printf("Ingrese la carrera del alumno 3: ");
    gets(a3.carrera);
    printf("Ingrese el promedio del alumno 3: ");
    scanf("%f", &a3.promedio);
    fflush(stdin);
    printf("Ingrese la direccion del alumno 3: ");
    gets(a3.direccion);


    printf("\nDatos del alumno 1:\n");
    printf("%d\n", a1.matricula);
    printf("%s\n", a1.nombre);
    printf("%s\n", a1.carrera);
    printf("%.2f\n", a1.promedio);
    printf("%s\n", a1.direccion);

    printf("\nDatos del alumno 2:\n");
    printf("%d\n", a2.matricula);
    printf("%s\n", a2.nombre);
    printf("%s\n", a2.carrera);
    printf("%.2f\n", a2.promedio);
    printf("%s\n", a2.direccion);

    printf("\nDatos del alumno 3:\n");
    printf("%d\n", a3.matricula);
    printf("%s\n", a3.nombre);
    printf("%s\n", a3.carrera);
    printf("%.2f\n", a3.promedio);
    printf("%s\n", a3.direccion);

    return 0;
}
