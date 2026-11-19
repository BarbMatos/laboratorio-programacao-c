#include <stdio.h>
int main(void)
{ int numero = 15, *p = &numero;

    printf("\nValor inicial: %d",numero);

    *p = 50;

    printf("\nValor final: %d",numero);

    return 0;
}   