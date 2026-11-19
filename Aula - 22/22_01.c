#include <stdio.h>

int main(void)
{ int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("Valor digitado: %d",numero);
    printf("\nEndereco da memoria: %p\n", (void *)&numero );

    return 0;
}