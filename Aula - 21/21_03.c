#include <stdio.h>
typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;
int main(void) {
    Funcionario funcionarios[5];

    FILE *arquivo = fopen("funcionarios.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("\nDigite o nome do funcionario %d: ", i + 1);
        scanf("%s", funcionarios[i].nome);
        printf("Digite o salario do funcionario %d: ", i + 1);
        scanf("%f", &funcionarios[i].salario);
        printf("Digite as horas extras do funcionario %d: ", i + 1);
        scanf("%d", &funcionarios[i].horasExtras);

        fprintf(arquivo, "Nome: %s, Salario: %.2f, Horas Extras: %d\n",
                funcionarios[i].nome, funcionarios[i].salario, funcionarios[i].horasExtras);
    }
    fclose(arquivo);

    arquivo = fopen("funcionarios.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    printf("\nDados dos funcionarios gravados no arquivo:\n");
    char linha[100];
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }
    fclose(arquivo);

    return 0;
}