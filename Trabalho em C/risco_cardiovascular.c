#include <stdio.h>
void exibirlinha(void) {
    printf("\n-------------------------\n");
}

int escolha(char pergunta[]){
    int resposta;
    printf("\n%s(1-sim / 0-nao): ", pergunta);
    scanf("%d", &resposta);
    
    switch(resposta){
        case 1:
        printf("Sim\n");
        break;
        
        case 0:
        printf("Nao\n");
        break;
        
        default:
        printf("opcao invalida!\n");
        break;
    }
    return resposta;
}

int calcularpontos( float mmhg, float mg, float kg, float m, int idade, int tabagismo, int diabetes, int cardiaca, int sedentarismo, int alimentacao, int estresse, int sono, int sexo){
    int pontos = 0;

    float imc = kg / (m * m);
    
    if(idade >= 65){
        pontos += 3;
    }
    if(mmhg >= 168){
        pontos += 3;
    }
    if(tabagismo == 1){
        pontos += 3;
    }
    if(diabetes == 1){
        pontos += 2;
    }
    if(cardiaca == 1){
        pontos += 2;
    }
    if(mg >= 160){
        pontos += 2;
    }
    if(imc >= 30){
        pontos += 2;
    }
    if(sedentarismo == 1){
        pontos += 1;
    }
    if(alimentacao == 1){
        pontos += 1;
    }
    if(estresse == 1){
        pontos += 1;
    }
    if(sono == 1){
        pontos += 1;
    }
    if(sexo == 1){
        pontos += 1;
    }
    
    return pontos;
}

const char *exibirrelatorio(int pontos){
    if(pontos <= 4){
        return "Menor de 10 porcentos";
    } else if(pontos >= 5 && pontos <= 10){
        return "Entre 10 - 20 porcentos";
    } else if(pontos >= 11 && pontos <= 15){
        return "Entre 20 - 30 porcentos";
    } else if(pontos >= 16 && pontos <= 18){
        return "Entre 30 - 50 porcentos";
    } else if(pontos >= 19 && pontos <= 22){
        return "Acima de 50 porcentos";
    }

    return "Sem classificacao";
}

int main(){
    char nomes[5][50];
    float mmhg[5], mg[5], kg[5], m[5];
    int idade[5], quantidade, tabagismo[5], diabetes[5], cardiaca[5], sedentarismo[5], alimentacao[5], estresse[5], sono[5], sexo[5];

    exibirlinha();
    printf("\nSistema de cadastro de pacientes\n");
    exibirlinha();

    do {
        printf("\nQuantidade de pacientes a serem cadastradas: ");
        scanf("%d", &quantidade);

        if (quantidade <= 1 || quantidade > 5) {
            printf("\nQuantidade invalida! Digite novamente: ");
            scanf("%d", &quantidade);
        }
    } while (quantidade <= 1 || quantidade > 5);

    for (int i = 0; i < quantidade; i++) {
        printf("\nCadastro do paciente %d\n", i + 1);
        exibirlinha();
        printf("\nInforme seu nome: ");
        scanf("%s", nomes[i]);
        printf("\nInforme sua idade: ");
        scanf("%d", &idade[i]);
        printf("\nInforme a sua pressao arterial (mmHg): ");
        scanf("%f", &mmhg[i]);

        printf("\nInforme seu colesterol LDL (mg/dl): ");
        scanf("%f", &mg[i]);
        printf("\nInforme seu peso (kg): ");
        scanf("%f", &kg[i]);
        printf("\nInforme sua altura (m): ");
        scanf("%f", &m[i]);

        exibirlinha();

        tabagismo[i] = escolha("\nUsuario de Tabagismo?: ");
        diabetes[i] = escolha("\nPossui Diabetes?: ");
        cardiaca[i] = escolha("\nHistorico de doenca cardiaca?: ");
        sedentarismo[i] = escolha("\nPossui sendentarismo?: ");
        alimentacao[i] = escolha("\nAlimentacao de rica em ultraprocessados?: ");
        estresse[i] = escolha("\nPossui historico de estresse cronico elevado?: ");
        sono[i] = escolha("\nPossui um sono inadequado?: ");
        sexo[i] = escolha("\nSeu sexo biologico e masculino?: ");

        int pontos = calcularpontos(mmhg[i], mg[i], kg[i], m[i], idade[i], tabagismo[i], diabetes[i], cardiaca[i], sedentarismo[i], alimentacao[i], estresse[i], sono[i], sexo[i]);
        printf("\nPontos: %d\n", pontos);
        printf("Classificacao de risco: %s\n", exibirrelatorio(pontos));
        exibirlinha();
    }

    exibirlinha();
    printf("\nSistema de analise de risco");
    exibirlinha();
    printf("\nQuantidade de pacientes cadastrados: %d\n", quantidade);

    exibirlinha();
    printf("\n Relatorio de risco");
    exibirlinha();

    for (int i = 0; i < quantidade; i++) {
        printf("\nPaciente %d: %s\n", i + 1, nomes[i]);
        printf("Classificacao de risco: %s\n", exibirrelatorio(calcularpontos(mmhg[i], mg[i], kg[i], m[i], idade[i], tabagismo[i], diabetes[i], cardiaca[i], sedentarismo[i], alimentacao[i], estresse[i], sono[i], sexo[i])));
        exibirlinha();
    }

    return 0;
}