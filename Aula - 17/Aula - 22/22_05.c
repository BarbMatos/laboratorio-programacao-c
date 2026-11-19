#include <stdio.h>
int main(void){
    int numero[5] = {1, 2, 3, 4, 5}, *p = numero;

    printf("\nPrimeiro valor do vetor: %d", *p);
    printf("\nSegundo valor do vetor: %d", *(p + 1));
    printf("\nTerceiro valor do vetor: %d", *(p + 2));
    printf("\nQuarto valor do vetor: %d", *(p + 3));
    printf("\nQuinto valor do vetor: %d", *(p + 4));

    return 0;
}