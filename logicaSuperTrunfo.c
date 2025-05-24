// neste trabalho foi incrementado a logica if-else no final de todo trabalho ja feito.

#include <stdio.h>

int main(){

    //carta 1

    char estadoA[20] = "A";
    char codigoA[20] = "A01";
    char nomeA[20] = "sao_paulo";
    signed long int populacaoA = 12325000;
    float areaA = 1521.11;
    float pibA = 69279997952.00;
    int numeropontosturisticosA = 50;
    float densidade_populacionalA = (populacaoA / areaA);
    float pib_per_capitaA = (pibA / populacaoA);
    float superpoderA;
   

    //carta 2

    char estadoB[20]= "B";
    char codigoB[20] = "B02";
    char nomeB[20] = "rio_de_janeiro";
    signed long int populacaoB = 6748000;
    float areaB = 1200.25;
    float pibB = 300499992576.00;
    int numeropontosturisticosB = 30;
    float densidade_populacionalB = (populacaoB / areaB);
    float pib_per_capitaB = (pibB / populacaoB);
    float superpoderB;
   

    printf("Carta 1 \n");
    printf("...\n");

    printf("Estado: %s \n", estadoA);
    printf("Codigo: %s \n", codigoA);
    printf("Nome da Cidade: %s \n", nomeA);
    printf("Populacao: %d Milhoes de Habitantes \n", populacaoA);
    printf("Area: %.2f km2\n", areaA);
    printf("PIB: %.2f Bilhoes de Reais\n", pibA);
    printf("Numero de pontos Turisticos: %d \n", numeropontosturisticosA);
    printf("Densidade Populacional: %.2f Hab/km2\n", densidade_populacionalA);
    printf("PIB Per Capita: %.2f Reais  \n", pib_per_capitaA);
    superpoderA = (float)(populacaoA + areaA + pibA + numeropontosturisticosA + pib_per_capitaA) / (densidade_populacionalA);
    printf("Super Poder de A: %.2f \n", superpoderA);
    printf("...\n");

    printf("Carta 2 \n");
    printf("...\n");

    printf("Estado: %s \n", estadoB);
    printf("Codigo: %s \n", codigoB);
    printf("Nome da Cidade: %s \n", nomeB);
    printf("Populacao: %d Milhoes de Habitantes\n", populacaoB);
    printf("Area: %.2f km2\n", areaB);
    printf("PIB: %.2f Bilhoes de Reais\n", pibB);
    printf("Numero de pontos Turisticos: %d \n", numeropontosturisticosB);
    printf("Densidade Populacional: %.2f Hab/km2\n", densidade_populacionalB);
    printf("PIB Per Capita: %.2f Reais  \n", pib_per_capitaB);
    superpoderB = (float)(populacaoB + areaB + pibB + numeropontosturisticosB + pib_per_capitaB) / (densidade_populacionalB);
    printf("Super Poder de B: %.2f \n", superpoderB);
    printf("...\n");


    printf("Comparacao de Cartas \n");
    printf("...\n");

    printf("Carta 1 \n");
    printf("...\n");

    printf("Populacao Carta 1: %d \n", populacaoA > populacaoB);
    printf("Area Carta 1:%d \n", areaA > areaB);
    printf("PIB Carta 1: %d \n", pibA > pibB);
    printf("Pontos Turisticos Carta 1:%d \n", numeropontosturisticosA > numeropontosturisticosB);
    printf("Densidade Carta 1: %d \n", densidade_populacionalA > densidade_populacionalB);
    printf("PIB per Capta Carta 1: %d \n", pib_per_capitaA > pib_per_capitaB);
    printf("Super Poder Carta 1: %d \n", superpoderA > superpoderB);
    printf("...\n");

    printf("Carta 2 \n");
    printf("...\n");

    printf("Populacao Carta 2:  %d \n", populacaoB > populacaoA);
    printf("Area Carta 2: %d \n", areaB > areaA);
    printf("PIB Carta 2:  %d \n", pibB > pibA);
    printf("Pontos Turisticos Carta 2: %d \n", numeropontosturisticosB > numeropontosturisticosA);
    printf("Densidade Carta 2: %d \n", densidade_populacionalB > densidade_populacionalA);
    printf("PIB per Capta Carta 2: %d \n", pib_per_capitaB > pib_per_capitaA);
    printf("Super Poder Carta 2: %d \n", superpoderB > superpoderA);

    printf("...\n");


    printf("CRIANDO A LOGICA DO SUPERTRUNFO\n");
    
    printf("...\n");


    // A PARTIR DAQUI, SEGUE OS CODIGOS PARA A COMPARAÇÃO ENTRE A CARTA1 E A CARTA2.
    printf("CARTA1\n");
    printf("...\n");

    if (densidade_populacionalA < densidade_populacionalB) { // se a densidade for menor, a carta será vencedora.
        printf("Densidade populacional Carta 1 Venceu\n");
    } else {
        printf("Densidade populacional Carta 1 perdeu\n");
    }
    if (populacaoA > populacaoB) { 
        printf("Populacao Carta 1 Venceu\n");
    } else {
        printf("Populacao Carta 1 perdeu\n");
    }
    if (areaA > areaB) {
        printf("Area Carta 1 Venceu\n");
    } else {
        printf("Area Carta 1 perdeu\n");
    }
    if (pibA > pibB) {
        printf("PIB Carta 1 Venceu\n");
    } else {
        printf("PIB Carta 1 perdeu\n");
    }
    if (numeropontosturisticosA > numeropontosturisticosB) {
        printf("Numero de pontos turisticos Carta 1 Venceu\n");
    } else {
        printf("Numero de pontos turisticos Carta 1 perdeu\n");
    }
    if (pib_per_capitaA > pib_per_capitaB) {
        printf("PIB per Capta Carta 1 Venceu\n");
    } else {
        printf("PIB per Capta Carta 1 perdeu\n");
    }
    if (superpoderA > superpoderB) {
        printf("Super Poder Carta 1 Venceu\n");
    } else {
        printf("Super Poder Carta 1 perdeu\n");
    }
    printf("...\n");

    printf("CARTA2\n");
    printf("...\n");

    if (densidade_populacionalB < densidade_populacionalA) { // se a densidade for menor, a carta será vencedora.
        printf("Densidade populacional Carta 2 venceu\n");
    } else {
        printf("Densidade populacional Carta 2 perdeu\n");
    }
    if (populacaoB > populacaoA) { 
        printf("Populacao Carta 2 venceu\n");
    } else {
        printf("Populacao Carta 2 perdeu\n");
    }
    if (areaB > areaA) {
        printf("Area Carta 2 venceu\n");
    } else {
        printf("Area Carta 2 perdeu\n");
    }
    if (pibB > pibA) {
        printf("PIB Carta 2 venceu\n");
    } else {
        printf("PIB Carta 2 perdeu\n");
    }
    if (numeropontosturisticosB > numeropontosturisticosA) {
        printf("Numero de pontos turisticos Carta 2 venceu\n");
    } else {
        printf("Numero de pontos turisticos Carta 2 perdeu\n");
    }
    if (pib_per_capitaB > pib_per_capitaA) {
        printf("PIB per Capta Carta 2 venceu\n");
    } else {
        printf("PIB per Capta Carta 2 perdeu\n");
    }
    if (superpoderB > superpoderA) {
        printf("Super Poder Carta 2 venceu\n");
    } else {
        printf("Super Poder Carta 2 perdeu\n");
    }
    printf("...\n");
    printf("...\n");
    printf("RESULTADO\n");

    if (densidade_populacionalA < densidade_populacionalB) {
        printf("A cidade vencedora é Sao Paulo\n");
    } else {
        printf("A cidade vencedora e Rio de Janeiro\n");

    }


}