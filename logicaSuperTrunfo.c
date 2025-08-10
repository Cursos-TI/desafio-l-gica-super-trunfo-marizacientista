#include <stdio.h>
int main () {
    char estado1[10];
    char estado2[10];
    char codigo_da_carta1[10];
    char codigo_da_carta2[10];
    char nome_da_cidade1[50];
    char nome_da_cidade2[50];
    int populacao1, numero_pontos_turistico1;
    int populacao2, numero_pontos_turistico2;
    float area1;
    float area2;
    float pib1;
    float pib2;
   

    printf("Digite o Estado 1: \n");
    scanf("%s", &estado1);
    printf("Digite o Estado 2: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta 1: \n");
    scanf("%s", &codigo_da_carta1);
    printf("Digite o codigo da carta 2: \n");
    scanf("%s", &codigo_da_carta2);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", &nome_da_cidade1);
    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &nome_da_cidade2);

    printf("Digite a população 1: \n");
    scanf("%d", &populacao1);
    printf("Digite a população 2: \n");
    scanf("%d", &populacao2);

    printf("Digite o numero de pontos turisticos 1: \n");
    scanf("%d", &numero_pontos_turistico1);
    printf("Digite o numero de pontos turisticos 2: \n");
    scanf("%d", &numero_pontos_turistico2);
    
    printf("Digite a area 1: \n");
    scanf("%f", &area1);
    printf("Digite a area 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB 1: \n");
    scanf("%f", &pib1);
    printf("Digite o PIB 2: \n");
    scanf("%f", &pib2);

    printf("Estado 1: %s - Codigo da Carta 1: %s\n", estado1, codigo_da_carta1);
    printf("Nome da Cidade 1: %s - População 1: %d\n", nome_da_cidade1, populacao1);
    printf("Numero de Pontos Turisticos 1: %d - Area 1: %f\n", numero_pontos_turistico1, area1);
    printf("PIB 1: %f\n", pib1);

    printf("Estado 2: %s - Codigo da Carta 2: %s\n", estado2, codigo_da_carta2);
    printf("Nome da Cidade 2: %s - População 2: %d\n", nome_da_cidade2, populacao2);
    printf("Numero de Pontos Turisticos 2: %d - Area 2: %f\n", numero_pontos_turistico2, area2);
    printf("PIB 2: %f\n", pib2);

    float dens_pop1 = populacao1/area1;
    float pib_percap1 = pib1/populacao1;
    float dens_pop2 = populacao2/area2;
    float pib_percap2 = pib2/populacao2;
    float super_poder1;
    float super_poder2;

    super_poder1 = populacao1 + area1 + pib1 + numero_pontos_turistico1 + pib_percap1 + 1/dens_pop1;
    super_poder2 = populacao2 + area2 + pib2 + numero_pontos_turistico2 + pib_percap2 + 1/dens_pop2;
    
    printf("Densidade Populacional 1: %.2f\n",dens_pop1);
    printf("Densidade Populacional 2: %.2f\n",dens_pop2);
    printf("PIB Percapita 1: %.2f\n",pib_percap1);
    printf("PIB Percapita 2: %.2f\n",pib_percap2);

    printf("Super Poder 1 é maior que Super Poder 2: %.2\n",super_poder1>super_poder2);
    
    if (pib1>pib2){
        printf("A carta1 venceu \n");
    }else{
        printf("A Carta2 venceu \n");
    }
    return 0;
}