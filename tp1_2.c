#include <stdio.h>

// a) Función que devuelve el cuadrado de un numero
int cuadradoDeUnNumero(int num)
{
    return (num * num);
}

// b) Funcion a) pero mostrada con void
void cuadradoVoid(int num)
{
    int resultado = num * num;
    printf("[void] El cuadrado del numero [%d] es: [%d]\n", num, resultado);
}

// c) Muestra Direccion y contenido de una variable
void mostrarDireccionYContenido(int *ptr)
{
    printf("Direccion de la variable: %p | Contenido: %d\n", ptr, *ptr);
}

// d) Intercambia dos valores
void invertir(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
    printf("Invertido: num1 = %d, num2 = %d\n", *a, *b);
}

// e) Ordena dos valores: menor en *a, mayor en *b
void orden(int *a, int *b)
{
    if (*a > *b)
    {
        invertir(a, b);
    }
    printf("Despues de ordenar: menor = %d, mayor = %d\n", *a, *b);
}
// f) Usar las funciones anteriores con pares de valores(EL FOR)
int main()
{
    int num1, num2;
    int cantidad, i;

    printf("¿Cuantos pares de valores desea ingresar?: "); //Ej 1 par de 2 numeros, 3 pares de 2 numeros y asi
    scanf("%d", &cantidad);

    for (i = 1; i <= cantidad; i++)
    {
        printf("\n---- PAR %d ----\n", i);
        printf("Ingrese el primer numero: ");
        scanf("%d", &num1);
        printf("Ingrese el segundo numero: ");
        scanf("%d", &num2);
        // Cuadrado del primero
        int cuadrado = cuadradoDeUnNumero(num1);
        printf("[a] Cuadrado de %d: %d\n", num1, cuadrado);
        printf("--------------------------------------------------\n");
        // Cuadrado del segundo
        int cuadrado2 = cuadradoDeUnNumero(num2);
        printf("[a] Cuadrado de %d: %d\n", num2, cuadrado2);
        printf("--------------------------------------------------\n");
        // Cuadrado  (void)
        printf("[b] Cuadrado por pantalla (void): ");
        cuadradoVoid(num1);
        cuadradoVoid(num2);
        printf("--------------------------------------------------\n");

        // Direccion y contenido
        printf("[c] Direccion y contenido de num1 y num2:\n");
        mostrarDireccionYContenido(&num1);
        mostrarDireccionYContenido(&num2);
        printf("--------------------------------------------------\n");

        // Invertir
        printf("[d] Antes de invertir: num1 = %d, num2 = %d\n", num1, num2);
        invertir(&num1, &num2);
        printf("--------------------------------------------------\n");

        // Ordenar
        printf("[e] Antes de ordenar: num1 = %d, num2 = %d\n", num1, num2);
        orden(&num1, &num2);
    }
    printf("--------------------------------------------------\n");

    return 0;
}
