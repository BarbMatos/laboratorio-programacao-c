#include <stdio.h>
int main(void){
  int tabela[2][2];


  for (int i = 1; i < 2; i++){
    for (int j = 1; j < 2; j++)
    {
      printf("Digite o valor para a linha %d, coluna %d: ", i, j);
      scanf("%d", &tabela[i][j]);
    }
  }
 printf("\n--- MATRIZ DIGITADA ---\n");
  for (int i = 1; i < 4; i++) {
    for (int j = 1; j < 4; j++) {
      printf("%d\t", tabela[i][j]);
    }
    printf("\n");
  }


  return 0;
}
