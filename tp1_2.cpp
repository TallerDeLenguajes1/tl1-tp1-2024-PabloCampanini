#include <stdio.h>

//Declaracion de funciones
int potencia(int numero);
void potenciaP(int *p_numero);
void datosVariable(int *p_variable);
void invertir(int *p_a, int *p_b);
void orden(int *p_num1, int *p_num2);

int main()
{
    //Declaracion de variables
    int numero, cuadrado, a, b;

    //Declaracion de punteros
    int *p_numero = &numero;
    int *p_a = &a;
    int *p_b = &b;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    cuadrado = potencia(numero);
    printf("\nEl cuadrado del numero sin puntero: %d\n", cuadrado);

    fflush(stdin);

    potenciaP(p_numero);
    printf("El cuadrado del numero con puntero: %d\n", *p_numero);

    datosVariable(p_numero);

    fflush(stdin);

    printf("\nIngrese un numero entero a: ");
    scanf("%d", &a);

    printf("\nIngrese un numero entero b: ");
    scanf("%d", &b);

    invertir(p_a, p_b);

    printf("\nLos numeros invertidos, a en lugar de b y b en lugar de a, quedarian:\n a = %d\n b = %d\n", a, b);

    fflush(stdin);

    orden(p_a, p_b);

    printf("\nLos numeros ordenados de menor a mayor quedan:\n a = %d\n b = %d", a, b);

    return 0;
}

//Definicion de funciones
int potencia(int numero)
{
    int cuadrado = numero * numero;

    return numero;
}

void potenciaP(int *p_numero)
{
    int aux = *p_numero;
    int cuadrado = aux * aux;
    *p_numero = cuadrado;
}

void datosVariable(int *p_variable)
{
    printf("La direccion de memoria de la variable es: %p\n", p_variable);
    printf("El valor almacenado en la variable es: %d\n", *p_variable);
}

void invertir(int *p_a, int *p_b)
{
    int aux1 = *p_a;
    *p_a = *p_b;
    *p_b = aux1;
}

void orden(int *p_num1, int *p_num2)
{
    if (*p_num1 > *p_num2)
    {
        // int aux2 = *p_num1;
        // *p_num1 = *p_num2;
        // *p_num2 = aux2;

        invertir(p_num1, p_num2);
    }
    
}