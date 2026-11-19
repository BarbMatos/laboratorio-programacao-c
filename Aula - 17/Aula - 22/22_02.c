#include <stdio.h>
int main(void)
{ int numero = 20, *p = &numero;

    printf("\nValor da variavel: %d",numero);
    printf("\nEndereco da memoria: %p", (void *)&numero );
    printf("\nEndereco armazenado no ponteiro: %p", (void *)p );
    printf("\nValor apontado pelo ponteiro: %d", *p );

    return 0;
}   