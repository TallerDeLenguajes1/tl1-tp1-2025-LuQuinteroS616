#include <stdio.h>

int main()
{
    printf("Hola mundo");

    int numero = 42;
    int *puntero;
    puntero = &numero;       // El puntero apunta a la dirección de la variable

    printf("1- Contenido del puntero (valor al que apunta): %d\n", *puntero);
    printf("2- Dirección de memoria almacenada por el puntero: %p\n", puntero);
    printf("3- Dirección de memoria de la variable: %p\n", &numero);
    printf("4- Dirección de memoria del puntero: %p\n", &puntero);
    printf("5- El tamaño de memoria utilizado por la variable:%d Bytes\n",sizeof(numero));

    return 0;
}
