#include <stdio.h>
 int verificarPar(int numero) {
     if (numero % 2 == 0) {
         return 1; 
     } else {
         return 0; 
     }
 }
int main(void) {
     int numero, resultado;

     printf("--- Verificador de numeros ---\n\n");

     printf("Digite um numero inteiro: ");
     scanf("%d", &numero);

     resultado = verificarPar(numero);

     if (resultado) {
         printf("\nO numero %d e par.\n", numero);
     } else {
         printf("\nO numero %d e impar.\n", numero);
     }

     return 0;
 }