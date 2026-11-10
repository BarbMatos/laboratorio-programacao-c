#include <stdio.h>
void exibirMenu(void) {
    printf("\n--- Menu de Operacoes ---\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("0 - Sair\n");
    printf("Opcao: ");
}

int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    return (float)a / b;
}

int main(void) {
    int opcao, num1, num2;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("\nSaindo do programa... Ate logo!\n");
            break;
        }

        if (opcao >= 1 && opcao <= 4) {
            printf("Primeiro numero: ");
            scanf("%d", &num1);
            printf("Segundo numero: ");
            scanf("%d", &num2);

            switch (opcao) {
                case 1:
                    printf("\nResultado da soma: %d\n", somar(num1, num2));
                    break;
                case 2:
                    printf("\nResultado da subtracao: %d\n", subtrair(num1, num2));
                    break;
                case 3:
                    printf("\nResultado da multiplicacao: %d\n", multiplicar(num1, num2));
                    break;
                case 4:
                    if (num2 != 0) {
                        printf("\nResultado da divisao: %.2f\n", dividir(num1, num2));
                    } else {
                        printf("\nErro: Divisao por zero nao e permitida!\n");
                    }
                    break;
                default:
                    break;
            }
        } else {
            printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
