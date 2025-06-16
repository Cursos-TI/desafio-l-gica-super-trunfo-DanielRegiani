#include <stdio.h>
#include <stdlib.h>

int main() {
    int atributoSelecionado, cartaSelecionada;

    // Carta 1 - São Paulo
    char nomeA[] = "sao_paulo";
    long populacaoA = 12325000;
    float areaA = 1521.11;
    float pibA = 69279997952.00;
    int pontosTuristicosA = 50;
    float densidadeA = populacaoA / areaA;
    float pibPerCapitaA = pibA / populacaoA;
    float superpoderA = (populacaoA + areaA + pibA + pontosTuristicosA + pibPerCapitaA) / densidadeA;

    // Carta 2 - Rio de Janeiro
    char nomeB[] = "rio_de_janeiro";
    long populacaoB = 6748000;
    float areaB = 1200.25;
    float pibB = 300499992576.00;
    int pontosTuristicosB = 30;
    float densidadeB = populacaoB / areaB;
    float pibPerCapitaB = pibB / populacaoB;
    float superpoderB = (populacaoB + areaB + pibB + pontosTuristicosB + pibPerCapitaB) / densidadeB;

    // Entrada
    printf("Bem-vindo ao jogo!\n");
    printf("Escolha a sua carta:\n1 - Sao Paulo\n2 - Rio de Janeiro\n");
    scanf("%d", &cartaSelecionada);

    printf("\nEscolha o atributo para competir:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Superpoder\n");
    scanf("%d", &atributoSelecionado);

    float valorA, valorB;
    switch (atributoSelecionado) {
        case 1: 
        valorA = populacaoA; valorB = populacaoB; 
        break;
        case 2: 
        valorA = areaA; valorB = areaB; 
        break;
        case 3: 
        valorA = pibA; valorB = pibB; 
        break;
        case 4: 
        valorA = pontosTuristicosA; valorB = pontosTuristicosB; 
        break;
        case 5: 
        valorA = densidadeA; valorB = densidadeB; 
        break;
        case 6: 
        valorA = pibPerCapitaA; valorB = pibPerCapitaB; 
        break;
        case 7: 
        valorA = superpoderA; valorB = superpoderB; 
        break;
        
        default:
            printf("Atributo invalido!\n");
            return 1;
    }

    printf("\nComparando %s (%.2f) x %s (%.2f)\n", nomeA, valorA, nomeB, valorB);

    if ((cartaSelecionada == 1 && valorA > valorB) || (cartaSelecionada == 2 && valorB > valorA)) {
        printf("Voce venceu!\n");
    } else if (valorA == valorB) {
        printf("Empate!\n");
    } else {
        printf("Voce perdeu!\n");
    }

    return 0;
}
