#include <stdio.h>
int main(void){
  int tabela[3][3], maior = 0;

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++)
    {
      printf("Digite o valor para a linha %d, coluna %d: ", i+1, j+1);
      scanf("%d", &tabela[i][j]);
    }
    maior =  tabela[0][0];
  }
 printf("\n--- MATRIZ DIGITADA ---\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {

      printf("%d \t", tabela[i][j]);

      if( tabela[i][j] > maior){
         maior = tabela[i][j];
      }
    }

    printf("\n");
  }
  printf("\nMaior numero da tabela: %d", maior);

  return 0;
}