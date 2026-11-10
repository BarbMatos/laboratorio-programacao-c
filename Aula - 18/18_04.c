#include <stdio.h>
int dobro(int numero) {
    return numero * 2;
}
int main(void) {
    int numero, resultado;

    printf("--- Controle de estoque ---\n\n");

    printf("Digite a quantidade inicial: ");
    scanf("%d", &numero);

    resultado = dobro(numero);

    printf("\nO dobro da quantidade inicial: %d\n", resultado);

    return 0;
}