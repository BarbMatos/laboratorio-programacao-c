#include <stdio.h>
int main(void){
  int notas[2][3], soma = 0;
   float media;

  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 3; j++)
    {
      printf("Aluno %d, nota da %d° prova: ", i+1, j+1);
      scanf("%d", &notas[i][j]);
    }
  } 

  printf("\n--- NOTAS ---\n");

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d\t", notas[i][j]);
      soma = soma + notas[i][j];
    }
    printf("\n");
  }

  media = soma/6.0;

  printf("\nSoma dos numeros da tabela: %d", soma);
  printf("\nMedia dos numeros da tabela: %.2f", media);

  return 0;
}
