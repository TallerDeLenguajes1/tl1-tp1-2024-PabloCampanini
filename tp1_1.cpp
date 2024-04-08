#include <stdio.h>

int main()
{
    printf("Hola mundo\n");

    //Declaracion de variables
    int numero = 100;

    //Declaracion de punteros
    int *pnumero = &numero;

    printf("El contenido del puntero: %d\n", *pnumero);
    printf("La direccion de memoria almacenada por el puntero: %p\n", pnumero);
    printf("La direccion de memoria de la variable: %p\n", &numero);
    printf("La direccion de memoria del puntero: %p\n", &pnumero);
    printf("El tamanio de memoria del entero es: %zu bytes\n", sizeof(int)); 

    return 0;
}