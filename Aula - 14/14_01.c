#include <stdio.h>
 int main(void) {
 int tabela[2][2] = {
   {0, 1},
   {2, 3} 
  };
 printf("\n--- MATRIZ DIGITADA ---\n");

 for (int i = 0; i < 2; i++) {
   for (int j = 0; j < 2; j++) {
     printf("%d\t ", tabela[i][j]);
    }
    printf("\n");
 }

return 0;
}
