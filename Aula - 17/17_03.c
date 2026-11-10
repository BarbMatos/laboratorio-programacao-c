#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50], perfil[10], confirmacao[50], mensagem[60] = "Ola! ";

    printf("--- LOGIN ALUNO ---");
    printf("\nInforme o nome do aluno: ");
    scanf("%49s", nome);
    printf("Confirme o nome: ");
    scanf("%s", confirmacao);
    printf("Informe o curso do aluno (CC ou SI): ");
    scanf("%s", perfil);

    printf("\n--- ID ---");
    printf("\nNome: %s", nome);
    printf("\nQuantidade de caracteres: %zu", strlen(nome));
    
    if (strcmp(perfil, "CC") == 0){
         printf("\nCurso: Ciencia da Computacao");
     } else{
         printf("\nCurso: Sistemas de Informação");
    }
    
    strcpy(confirmacao, nome);
    strcat(mensagem, confirmacao);
    printf("\n%s", mensagem);
    printf("\nLogin finalizado com sucesso :)");

    return 0;
}

