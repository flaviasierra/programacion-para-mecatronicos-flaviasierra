
#include <stdio.h>

int main(void) {
    char p1;
    FILE *ar;


    if ((ar = fopen("arc.txt", "r")) != NULL) {

        while ((p1 = fgetc(ar)) != EOF) {

            putchar(p1);
        }

        fclose(ar);
    } else {

        printf("No se puede abrir el archivo");
        return 1;
    }
    return 0;
