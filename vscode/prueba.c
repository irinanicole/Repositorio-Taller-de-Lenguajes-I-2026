#include <stdio.h>

int main()
{
    printf("\n\nHola mundo!\n");
    int edad;
    printf("\nIngrese su edad: ");
    scanf("%d", &edad);
    edad = edad + 25;
    printf("\nSu edad dentro de 25 annos sera: %d",edad);

    return 0;
}