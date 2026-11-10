#include <stdio.h>
int main(void) { 
 char palavra[50];
 int vogais = 0;

 printf("Digite uma palavra: ");
 scanf("%s", palavra);

  for(int i = 0; palavra[i] != '\0'; i++){
    if (palavra[i] == 'a'|| palavra[i] == 'e'|| palavra[i] == 'i'|| palavra[i] == 'o'|| palavra[i] == 'u') {
        vogais++;
    }
  }

 printf("Total de vogais da palavra: %d", vogais);

 return 0;
}