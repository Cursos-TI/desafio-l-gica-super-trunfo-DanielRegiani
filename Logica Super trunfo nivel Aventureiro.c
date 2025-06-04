#include <stdio.h>

int main(){

    //carta 1

    char estadoA[20] = "A"; // utilizar o formato '%s'
    char codigoA[20] = "A01";
    char nomeA[20] = "sao_paulo";
    signed long int populacaoA = 12325000; // utilizar o formato '%ld'
    float areaA = 1521.11; // utilizar o formato '%f'
    float pibA = 69279997952.00;
    int numeropontosturisticosA = 50; // utilizar o formato '%d'
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

    printf("Estado: %s \n", estadoA);
    printf("Codigo: %s \n", codigoA);
    printf("Nome da Cidade: %s \n", nomeA);
    printf("Populacao: %ld Milhoes de Habitantes\n", populacaoA);
    printf("Area: %.2f km2\n", areaA);
    printf("PIB: %.2f Bilhoes de Reais\n", pibA);
    printf("Numero de pontos Turisticos: %d \n", numeropontosturisticosA);
    printf("Densidade Populacional: %.2f Hab/km2\n", densidade_populacionalA);
    printf("PIB Per Capita: %.2f Reais  \n", pib_per_capitaA);
    superpoderA = (float)(populacaoA + areaA + pibA + numeropontosturisticosA + pib_per_capitaA) / (densidade_populacionalA);
    printf("Super Poder de A: %.2f \n", superpoderA);

    printf("Carta 2 \n");

    printf("Estado: %s \n", estadoB);
    printf("Codigo: %s \n", codigoB);
    printf("Nome da Cidade: %s \n", nomeB);
    printf("Populacao: %ld Milhoes de Habitantes\n", populacaoB);
    printf("Area: %.2f km2\n", areaB);
    printf("PIB: %.2f Bilhoes de Reais\n", pibB);
    printf("Numero de pontos Turisticos: %d \n", numeropontosturisticosB);
    printf("Densidade Populacional: %.2f Hab/km2\n", densidade_populacionalB);
    printf("PIB Per Capita: %.2f Reais  \n", pib_per_capitaB);
    superpoderB = (float)(populacaoB + areaB + pibB + numeropontosturisticosB + pib_per_capitaB) / (densidade_populacionalB);
    printf("Super Poder de B: %.2f \n", superpoderB);


    //printf("Comparacao de Cartas \n");
    //printf("Carta 1 \n");

//    printf("Populacao Carta 1: %d \n", populacaoA > populacaoB);
//    printf("Area Carta 1:%d \n", areaA > areaB);
//    printf("PIB Carta 1: %d \n", pibA > pibB);
//    printf("Pontos Turisticos Carta 1:%d \n", numeropontosturisticosA > numeropontosturisticosB);
 //   printf("Densidade Carta 1: %d \n", densidade_populacionalA > densidade_populacionalB);
//    printf("PIB per Capta Carta 1: %d \n", pib_per_capitaA > pib_per_capitaB);
//    printf("Super Poder Carta 1: %d \n", superpoderA > superpoderB);
//
//    printf("Carta 2 \n");
//
  //  printf("Populacao Carta 2:  %d \n", populacaoB > populacaoA);
 //   printf("Area Carta 2: %d \n", areaB > areaA);
  //  printf("PIB Carta 2:  %d \n", pibB > pibA);
 //   printf("Pontos Turisticos Carta 2: %d \n", numeropontosturisticosB > numeropontosturisticosA);
 //   printf("Densidade Carta 2: %d \n", densidade_populacionalB > densidade_populacionalA);
 //   printf("PIB per Capta Carta 2: %d \n", pib_per_capitaB > pib_per_capitaA);
 //   printf("Super Poder Carta 2: %d \n", superpoderB > superpoderA);

 
    int opcao;
    int opcao1;
    int opcao2;
   

    printf("## MENU ##\n");
    printf("1. carta1\n");
    printf("2. carta2\n");
    printf("3. sair\n");
    printf("Escolha o Numedo da carta:\n");
     scanf("%d", &opcao);

     switch (opcao) // MENU PARAA CARTA 1
     {
     case 1:
        printf("Escolha agora a proxima opcao\n");
        printf("1. populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Numero de pontos Turisticos\n");
        printf("5. Densidade populacional\n");
        printf("6. PIB per capta\n");
        printf("7. super poder\n");
         scanf("%d", &opcao1);
         break;

         default:
         printf("OPCAO INVALIVA\n");
         break;
   
      }   


        switch (opcao1)
        {
        case 1:
         if (populacaoA > populacaoB){
            printf("POPULACAO DO\n");
            printf("ESTADO DE SAO PAULO E DE 12325000 PESSOAS\n");
            printf("CARTA 1 VENCEU A PARTIDA!\n");
      } else if (populacaoA < populacaoB){
            printf("CARTA 1 PERDEU!\n");
            printf("POPULACAO DA CARTA 2 É 6748000 PESSOAS\n");
            printf("VENCEDOR E RIO DE JANEIRO!\n");
         } else if (populacaoA == populacaoB){
            printf("EMPATE!");
         }
         break;
         case 2:
         if (areaA > areaB){
            printf("AREA DO\n");
            printf("ESTADO DE SAO PAULO E DE 1521.11\n");
            printf("CARTA 1 VENCEU A PARTIDA!\n");
      } else if (areaA < areaB) {
            printf("CARTA 1 PERDEU!\n");
            printf("AREA CARTA 2 É 1200.25\n");
            printf("VENCEDOR E RIO DE JANEIRO!\n");
         } else if (areaA == areaB) {
            printf("EMPATE!");
         }
         break;
         case 3:
         if (pibA > pibB){
            printf("PIB DO\n");
            printf("ESTADO DE SAO PAULO E DE 69279997952.00\n");
            printf("CARTA 1 VENCEU A PARTIDA!\n");
      } else if (pibA < pibB) {
            printf("CARTA 1 PERDEU!\n");
            printf("PIB DA CARTA 2 É 300499992576.00\n");
            printf("VENCEDOR E RIO DE JANEIRO!\n");
         } else if (pibA == pibB) {
            printf("EMPATE!");
         }
         break;
         case 4:
         if (numeropontosturisticosA > numeropontosturisticosB){
            printf("NUMERO DE PONTOS TURISTICOS DO\n");
            printf("ESTADO DE SAO PAULO E DE 50\n");
            printf("CARTA 1 VENCEU A PARTIDA!\n");
      } else if (numeropontosturisticosA < numeropontosturisticosB){
            printf("CARTA 1 PERDEU!\n");
            printf("NUMERO DE PONTOS TURISTICOS DA CARTA 2 É 30\n");
            printf("VENCEDOR E RIO DE JANEIRO!\n");
         } else if (numeropontosturisticosA == numeropontosturisticosB){
            printf("EMPATE!");
         }
         break;
         case 5:
         if (densidade_populacionalA < densidade_populacionalB){
            printf("DENSIDADE POPULACIONAL DO\n");
            printf("ESTADO DE SAO PAULO E DE 8.102,63\n");
            printf("CARTA 1 VENCEU A PARTIDA!\n");
      } else if (densidade_populacionalA > densidade_populacionalB){
            printf("CARTA 1 PERDEU!\n");
            printf("DENSIDADE POPULACIONAL DA CARTA 2 E 5.622,16\n");
            printf("VENCEDOR E RIO DE JANEIRO!\n");
         } else if (densidade_populacionalA == densidade_populacionalB){
            printf("EMPATE!");
         }
         break;
         case 6:
         if (pib_per_capitaA > pib_per_capitaB){
            printf("PIB PER CAPITA DO\n");
            printf("ESTADO DE SAO PAULO E DE 5.621,09\n");
            printf("CARTA 1 VENCEU A PARTIDA!\n");
      } else if (pib_per_capitaA < pib_per_capitaB){
            printf("CARTA 1 PERDEU!\n");
            printf("PIB PER CAPITA DA CARTA 2 E 44.531,712\n");
            printf("VENCEDOR E RIO DE JANEIRO!\n");
         } else if (pib_per_capitaA == pib_per_capitaB){
            printf("EMPATE!");
         }
         break;
         case 7:
         if (superpoderA > superpoderB){
            printf("SUPER PODER DO\n");
            printf("ESTADO DE SAO PAULO E DE 8.551.831,953\n");
            printf("CARTA 1 VENCEU A PARTIDA!\n");
      } else if (superpoderA < superpoderB){
            printf("CARTA 1 PERDEU!\n");
            printf("SUPER PODER DA CARTA 2 E 53.450.415,203\n");
            printf("VENCEDOR E RIO DE JANEIRO!\n");
         } else if (superpoderA == superpoderB){
            printf("EMPATE!");
         }
         break;
      }   
      
      /////////// menu para a CARTA 2
      switch (opcao)
     {
     case 2:
        printf("Escolha agora a proxima opcao\n");
        printf("1. populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Numero de pontos Turisticos\n");
        printf("5. Densidade populacional\n");
        printf("6. PIB per capta\n");
        printf("7. super poder\n");
         scanf("%d", &opcao2);
         break;

     
      }   


        switch (opcao2)
        {
        case 1:
         if (populacaoB > populacaoA){
            printf("POPULACAO DO\n");
            printf("ESTADO DE RIO DE JANEIRO E DE 6748000 PESSOAS\n");
            printf("CARTA 2 VENCEU A PARTIDA!\n");
      } else if (populacaoB < populacaoA){
            printf("CARTA 2 PERDEU!\n");
            printf("POPULACAO DA CARTA 1 É 12325000\n");
            printf("VENCEDOR E SAO PAULO!\n");
         } else if (populacaoB == populacaoA){
            printf("EMPATE!");
         }
         break;
         case 2:
         if (areaB > areaA){
            printf("AREA DO\n");
            printf("ESTADO DE RIO DE JANEIRO E DE 1200.25\n");
            printf("CARTA 2 VENCEU A PARTIDA!\n");
      } else if (areaB < areaA){
            printf("CARTA 2 PERDEU!\n");
            printf("AREA DA CARTA 1 É 1521.11\n");
            printf("VENCEDOR E SAO PAULO!\n");
         } else if (areaB == areaA){
            printf("EMPATE!");
         }
         break;
         case 3:
         if (pibB > pibA){
            printf("PIB DO\n");
            printf("ESTADO DE RIO DE JANEIRO E DE 300499992576.00\n");
            printf("CARTA 2 VENCEU A PARTIDA!\n");
      } else if (pibB < pibA){
            printf("CARTA 2 PERDEU!\n");
            printf("PIB DA CARTA 1 É 69279997952.00\n");
            printf("VENCEDOR E SAO PAULO!\n");
         } else if (pibB == pibA){
            printf("EMPATE!");
         }
         break;
         case 4:
         if (numeropontosturisticosB > numeropontosturisticosA){
            printf("NUMERO DE PONTOS TURISTICOS DO\n");
            printf("ESTADO DE RIO DE JANEIRO E DE 30\n");
            printf("CARTA 2 VENCEU A PARTIDA!\n");
      } else if (numeropontosturisticosB < numeropontosturisticosA){
            printf("CARTA 2 PERDEU!\n");
            printf("NUMERO DE PONTOS TURISTICOS DA CARTA 1 É 50\n");
            printf("VENCEDOR E SAO PAULO!\n");
         } else if (numeropontosturisticosB == numeropontosturisticosA){
            printf("EMPATE!");
         }
         break;
         case 5:
         if (densidade_populacionalB < densidade_populacionalA){
            printf("DENSIDADE POPULACIONAL DO\n");
            printf("ESTADO DE RIO DE JANEIRO E DE 5.622,16\n");
            printf("CARTA 2 VENCEU A PARTIDA!\n");
      } else if (densidade_populacionalB > densidade_populacionalA){
            printf("CARTA 2 PERDEU!\n");
            printf("DENSIDADE POPULACIONAL DA CARTA 1 E 8.102,63\n");
            printf("VENCEDOR E SAO PAULO!\n");
         } else if (densidade_populacionalB == densidade_populacionalA){
            printf("EMPATE!");
         }
         break;
         case 6:
         if (pib_per_capitaB > pib_per_capitaA){
            printf("PIB PER CAPITA DO\n");
            printf("ESTADO DE RIO DE JANEIRO E DE 44.531,712\n");
            printf("CARTA 2 VENCEU A PARTIDA!\n");
      } else if (pib_per_capitaB < pib_per_capitaA){
            printf("CARTA 2 PERDEU!\n");
            printf("PIB PER CAPITA DA CARTA 1 E 5.621,09\n");
            printf("VENCEDOR E SAO PAULO!\n");
         } else if (pib_per_capitaB == pib_per_capitaA){
            printf("EMPATE!");
         }
         break;
         case 7:
         if (superpoderB > superpoderA){
            printf("SUPER PODER DO\n");
            printf("ESTADO DE RIO DE JANEIRO E DE 53.450.415,203\n");
            printf("CARTA 2 VENCEU A PARTIDA!\n");
      } else if (superpoderB < superpoderA){
            printf("CARTA 2 PERDEU!\n");
            printf("SUPER PODER DA CARTA 1 E 8.551.831,953\n");
            printf("VENCEDOR E SAO PAULO!\n");
         } else if (superpoderB == superpoderA){
            printf("EMPATE!");
         }
         break;
      }   

      
       return 0;
   
}
