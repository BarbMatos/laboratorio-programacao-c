#include <stdio.h>
 void dobrar(int *p)
 { *p = *p * 2; }
int main(void)
{ int numero = 10;

    printf("Valor inicial: %d",numero);
    dobrar(&numero);
    printf("\nValor final: %d",numero);

    return 0;
}