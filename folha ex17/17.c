#include <stdio.h>
#include <string.h>
typedef struct {
    char nome[50];
    int idade;
    float salario;
} funcionario;
int main(void) {
    float diferenca = 0.0;
    funcionario f1, f2;
    
    printf(" --- Cadastro de Funcionarios ---\n");
    printf("\nDigite o nome do funcionario 1: ");
    scanf("%49s", f1.nome);
    printf("Digite a idade do funcionario 1: ");
    scanf("%d", &f1.idade);
    printf("Digite o salario do funcionario 1: ");
    scanf("%f", &f1.salario);

    printf("\nDigite o nome do funcionario 2: ");
    scanf("%49s", f2.nome);
    printf("Digite a idade do funcionario 2: ");
    scanf("%d", &f2.idade);
    printf("Digite o salario do funcionario 2: ");
    scanf("%f", &f2.salario);

    printf("\n --- Dados dos Funcionarios ---\n");
    printf("Funcionario 1:\n");
    printf("Nome: %s\n", f1.nome);  
    printf("Idade: %d\n", f1.idade);
    printf("Salario: %.2f\n", f1.salario);
    printf("\nFuncionario 2:\n");
    printf("Nome: %s\n", f2.nome);
    printf("Idade: %d\n", f2.idade);
    printf("Salario: %.2f\n", f2.salario);


    if (f1.salario > f2.salario) {
        diferenca = f1.salario - f2.salario;
         printf("\nDiferenca de salario: %.2f\n", diferenca);
         printf("O funcionario 1 tem o maior salario.\n");
    } else if (f1.salario < f2.salario) {
        diferenca = f2.salario - f1.salario;
         printf("\nDiferenca de salario: %.2f\n", diferenca);
         printf("O funcionario 2 tem o maior salario.\n");
    } else {
        printf("Os funcionarios tem salarios iguais.\n");
    }

    return 0;
}
