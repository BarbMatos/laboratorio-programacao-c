#include <stdio.h>
int main(void) {
   char nome[50];
   int matricula;

   FILE *arquivo = fopen("funcionarios.txt", "w");
   if (arquivo == NULL) {
      printf("Erro ao abrir o arquivo.\n");
      return 1;
   }

   for (int i = 0; i < 5; i++) {
      printf("\nDigite o nome do funcionario %d: ", i + 1);
      scanf("%s", nome);
      printf("Digite a matricula do funcionario %d: ", i + 1);
      scanf("%d", &matricula);

      fprintf(arquivo, "Nome: %s, Matrícula: %d\n", nome, matricula);
      fclose(arquivo);
      printf("\nDados do funcionario %d gravados com sucesso!\n", i + 1);
   }

    return 0;
}