#include <stdio.h>

int main(void){
    int assentos[3][4], oculpados = 0, disponiveis = 0;
    
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){

           printf("Digite o status do assento [%d][%d] (0 = livre, 1 = ocupado): ", i + 1, j + 1);
           scanf("%d", &assentos[i][j]);
        }
    }

    printf("\n--- ASSENTOS ---\n");

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){

            printf("%d\t", assentos[i][j]);

            if (assentos[i][j] == 1){
                  oculpados ++;
            } else if (assentos[i][j] == 0) {
                 disponiveis ++;
            }
        }
       printf("\n");
    }

    printf("\nAssentos Ocupados: %d\n", oculpados);
    printf("Assentos Disponiveis: %d\n", disponiveis);

    return 0;
}


