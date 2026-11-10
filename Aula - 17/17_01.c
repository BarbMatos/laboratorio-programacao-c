#include <stdio.h>
#include <string.h>

int main(void) {
    char user[50], perfil[10], confirmacao[50], mensagem[60] = "Bem-vindo(a), ";

    printf("--- USER LOGIN ---");
    printf("\nInforme seu usuario: ");
    scanf("%49s", user);
    printf("Confirme o usuario: ");
    scanf("%s", confirmacao);
    printf("Informe seu perfil de acesso: ");
    scanf("%s", perfil);

    printf("\n--- USER DATA ---");
    printf("\nUser: %s", user);
    printf("\nQuantidade de caracteres: %zu", strlen(user));
    
    if (strcmp(perfil, "ADMIN") == 0){
         printf("\nPerfil de acesso: Administrador");
     } else{
         printf("\nPerfil de acesso: Usuario comum\n");
    }
    
    strcpy(confirmacao, user);
    strcat(mensagem, confirmacao);
    printf("\n%s", mensagem);
    printf("\nLogin finalizado com sucesso");

    return 0;
}
