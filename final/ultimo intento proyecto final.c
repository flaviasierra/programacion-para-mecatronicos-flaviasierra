
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Este programa calcula el costo x km de un viaje en carro, junto con el valor actual del vehiculo*/

struct Vehiculo /*esta funcion almacena los datos relacionados con el vehiculo*/
{
    float distancia;
    float km_por_litro;
    float valor_adquisicion;
    float precio_litro_gasolina;
    float depreciacion;
    float mantenimiento;
};


void leerDatos(struct Vehiculo *vehiculo) /*Esta funcion solicita al usuario que ingrese los datos relevantes sobre el vehiculo, como el costo de mantenimiento anual, la frecuencia de mantenimiento anual, el costo del seguro, etc. Luego, almacena estos datos en la estructura precio proporcionada como argumento*/

{
    printf("\nBuenos dias/tardes/noches/ si desea hacer consulta de los datos previamente guardados por favor pulsar 'S' o 'N', de no ser asi introduzca los datos necesarios. \n"); /* solicitud de datos al usuario*/

    printf("\nIngresa la distancia del viaje en kilometros : ");
    scanf("%f", &vehiculo->distancia);
    printf("Ingresa los kilometros por litro del vehiculo: ");
    scanf("%f", &vehiculo->km_por_litro);
    printf("Ingresa el valor de adquisicion del vehiculo: ");
    scanf("%f", &vehiculo->valor_adquisicion);
    printf("Ingresa el precio por litro de gasolina: ");
    scanf("%f", &vehiculo->precio_litro_gasolina);
    printf("Ingresa la depreciacion del vehiculo: ");
    scanf("%f", &vehiculo->depreciacion);
    printf("Ingresa el costo de mantenimiento: ");
    scanf("%f", &vehiculo->mantenimiento);
}

void guardarDatos(struct Vehiculo vehiculo) /*Funcion para guardar los datos del vehiculo en un archivo*/
{
    FILE *archivo;
    archivo = fopen("dato_vehiculo.txt", "a"); /*Esta funcion toma la estructura  que contiene los datos del vehiculo y los guarda en un archivo de texto llamado "datos_vehiculo.txt"*/
    if (archivo != NULL)
    {
        fprintf(archivo, "%.2f %.2f %.2f %.2f %.2f %.2f\n", /*muestra  los datos del vehiculo en la consola*/
                vehiculo.distancia, vehiculo.km_por_litro, vehiculo.valor_adquisicion,
                vehiculo.precio_litro_combustible, vehiculo.depreciacion, vehiculo.mantenimiento);
        fclose(archivo);
    }
    else
    {
        printf("Error al abrir el archivo.");
    }
}

void mostrarDatos(struct Vehiculo vehiculo) /*Muestra los datos del vehículo en formato tabular en la consola*/
{
    printf("------------------------------------------");
    printf("\nDatos del vehiculo:\n");
    printf("| %-25s | %-10s |\n", "Parametro", "Valor");
    printf("|---------------------------|------------|\n");
    printf("| %-25s | %-10.2f |\n", "Distancia (km)", vehiculo.distancia);
    printf("| %-25s | %-10.2f |\n", "Km por litro", vehiculo.km_por_litro);
    printf("| %-25s | %-10.2f |\n", "Valor adquisicion", vehiculo.valor_adquisicion);
    printf("| %-25s | %-10.2f |\n", "Precio por litro", vehiculo.precio_litro_combustible);
    printf("| %-25s | %-10.2f |\n", "Depreciacion", vehiculo.depreciacion);
    printf("| %-25s | %-10.2f |\n", "Mantenimiento", vehiculo.mantenimiento);
    printf("------------------------------------------\n");
}

void mostrarProyeccion(struct Vehiculo vehiculo) /*Funcion para mostrar la proyección de costos relacionados con el vehiculo en la consola*/
{
    printf("------------------------------------------");
    printf("\nProyeccion:\n");
    printf("| %-20s | %-15s |\n", "Parametro", "Valor");
    printf("|----------------------|-----------------|\n");
    printf("| %-20s | %-15.2f |\n", "Consumo (litros)", vehiculo.distancia / vehiculo.km_por_litro);
    printf("| %-20s | %-15.2f |\n", "Costo por kilometro", vehiculo.precio_litro_combustible / vehiculo.km_por_litro);
    printf("| %-20s | %-15.2f |\n", "Kilometros por galon", vehiculo.km_por_litro * 0.264172);
    printf("| %-20s | %-15.2f |\n", "Costo total viaje", (vehiculo.distancia / vehiculo.km_por_litro) * vehiculo.precio_litro_combustible);  /*Calcula y muestra la proyección de costos relacionados con el vehículo en la consola*/
    printf("| %-20s | %-15.2f |\n", "Valor actual",(vehiculo.valor_adquisicion - vehiculo.depreciacion)+ vehiculo.mantenimiento);
    printf("------------------------------------------\n");

}

void leerDesdeArchivo(struct Vehiculo *vehiculo) /* lee los datos del vehiculo desde un archivo*/
{
    FILE *archivo;
    archivo = fopen("dato_vehiculo.txt", "r");
    if (archivo != NULL)
    {
        fscanf(archivo, "%f %f %f %f %f %f",
               &vehiculo->distancia, &vehiculo->km_por_litro, &vehiculo->valor_adquisicion,
               &vehiculo->precio_litro_combustible, &vehiculo->depreciacion, &vehiculo->mantenimiento); /*Lee los datos del vehículo desde un archivo llamado "dato_vehiculo.txt"*/
        fclose(archivo);
    }
    else
    {
        printf("El archivo no existe o no se puede abrir.\n");
    }
}

int main()
{
    char opcion;
    struct Vehiculo vehiculo;

    do
    {
        leerDatos(&vehiculo); /* Llama a la función para que el usuario ingrese los datos del vehículo*/

        printf("¿Desea guardar los datos del vehiculo? (S/N): ");
        scanf(" %c", &opcion);
        if (opcion == 'S' || opcion == 's') /*Si el usuario elige guardar, llama a la función para guardar los datos en un archivo*/
        {
            guardarDatos(vehiculo);
        }
        else if (opcion == 'N' || opcion == 'n') /*Si el usuario elige no guardar, muestra un mensaje*/
        {
            printf("No se guardaron los datos del vehiculo.\n");
        }
        else
        {
            printf("Opcion no valida.\n"); /* muestra un mensaje y termina el programa en caso de que el usuario introduzca una opcion no valida*/
            return 1;
        }

        mostrarDatos(vehiculo); /*Muestra los datos del carro en la consola*/
        mostrarProyeccion(vehiculo); /*Muestra la proyección de costos relacionados con el vehiculo en la consola*/

        printf("¿Desea salir o continuar? (S para salir, c para continuar): ");
        scanf(" %c", &opcion);

        if (opcion == 'S' || opcion == 's') /* muestra un mensaje y termina el programa*/
        {


        }

        if (opcion == 'C' || opcion == 'c') /* llama a la función para leer desde el archivo*/
        {
            printf("¿Desea utilizar los datos del archivo o ingresar nuevos? (A para archivo, cualquier otra tecla para continuar): ");
            scanf(" %c", &opcion);
            if (opcion == 'A' || opcion == 'a')
            {
                leerDesdeArchivo(&vehiculo);
            }
        }

    }
    while (opcion != 'S' && opcion != 's'); /*crea un bucle hasta que el usuario decida salir*/

    return 0;
}




///*FLAVIA MARIA SIERRA VENTURA*///
///2023-1786///
///PROFE NO ME QUEME POR FAVOR///
