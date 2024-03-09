#include <stdio.h>

int main(void)
{
    char p1, p2, p3 = '$';

    printf("\nIngrese un caracter: ");
    p1 = getchar();

    if (p1 >= 'A' && p1 <= 'Z') {

        p1 = p1 + 32;
        printf("El caracter en minuscula es: %c\n", p1);
    } else {
        printf("El caracter  no es una letra mayuscula.\n");
    }

    return 0;
}
