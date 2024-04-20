
#include <stdio.h>

void main(void) {
    char cad[50];
    int res;
    FILE *ar;

    if ((ar = fopen("arc.txt", "w")) != NULL) {
        printf("\nDesea ingresar una cadena de caracteres\n si-1 no-0");
        scanf("%d", &res);
        while (res == 1) {
            fflush(stdin);
            printf("Ingrese los caracteres: ");
            fgets(cad, sizeof(cad), stdin);
            fprintf(ar, "%s", cad);
            printf("\nDesea ingresar otra cadena de caracteres\n si-1 no-0");
            scanf("%d", &res);
        }
        fclose(ar);
    } else {
        printf("No se puede abrir el archivo");
    }
}
