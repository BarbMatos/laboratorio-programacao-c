#include <stdio.h>
float maiorPreco(float p1, float p2) {
    if (p1 > p2) {
        return p1;
    } else {
        return p2;
    }
}

int main(void) {
    float preco1, preco2, maiorp;

    printf("--- Comparador de Precos ---\n\n");

    printf("Digite o preco do primeiro produto: $");
    scanf("%f", &preco1);

    printf("Digite o preco do segundo produto: $");
    scanf("%f", &preco2);

    if (preco1 == preco2) {
        printf("\nOs dois produtos tem precos iguais ($%.2f).\n", preco1);
    } else {
        maiorp = maiorPreco(preco1, preco2);
        printf("\nO produto mais caro custa: $%.2f\n", maiorp);
    }

    return 0;
}
