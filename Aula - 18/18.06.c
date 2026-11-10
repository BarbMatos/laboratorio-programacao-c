#include <stdio.h>
 int calcularfatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++)
     fat = fat * i;
    return fat;
 }
int main(void) {
    int numero, resultado;

    printf("--- Calculadora de Fatorial ---\n\n");

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("\nErro: O fatorial nao e definido para numeros negativos.\n");
    } else {
        resultado = calcularfatorial(numero);
        printf("\nO fatorial de %d e: %d\n", numero, resultado);
    }

    return 0;
}