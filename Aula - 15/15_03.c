#include <stdio.h>
int main(void){
  int tabela[3][3], soma = 0;

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++)
    {
      printf("Digite o valor para a linha %d, coluna %d: ", i+1, j+1);
      scanf("%d", &tabela[i][j]);
    }
  }
 printf("\n--- MATRIZ DIGITADA ---\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {

      printf("%d \t", tabela[i][j]);

      if( tabela[i][j]% 2 == 0){
         soma = soma + tabela[i][j];
      }
    }

    printf("\n");
  }
  printf("\nSoma dos numeros da tabela: %d", soma);

  return 0;
}