#include <stdio.h>
int main(void) { 
 char palavra[50];
 int contador = 0;

 printf("Digite uma palavra: ");
 scanf("%s", palavra);

 for(int i = 0; palavra[i] != '\0'; i++){
    contador++;
 }

 printf("Quantidade de letras da palavra: %d", contador);

 return 0;
}