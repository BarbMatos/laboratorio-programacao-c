#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50], produto[20], confirmacao[50], mensagem[60] = "Descricao do produto: ";

    printf("--- CADASTRO DO PRODUTO ---");
    printf("\nInforme o nome do produto: ");
    scanf("%49s", nome);
    printf("Confirme o nome: ");
    scanf("%s", confirmacao);
    printf("Informe a categoria do produto (PERIFERICO ou HARDWARE): ");
    scanf("%s", produto);

    printf("\n--- RESUMO ---");
    printf("\nNome: %s", nome);
    printf("\nQuantidade de caracteres: %zu", strlen(nome));
    
    if (strcmp(produto, "PERIFERICO") == 0){
         printf("\nCategoria: Periferico");
     } else{
         printf("\nCategoria: Hardware\n");
    }
    
    strcpy(confirmacao, nome);
    strcat(mensagem, confirmacao);
    printf("\n%s", mensagem);
    printf("\nCadastro finalizado com sucesso!");

    return 0;
}
