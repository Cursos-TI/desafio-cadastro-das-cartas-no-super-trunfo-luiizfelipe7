#include <stdio.h>

int main() {
    
    printf("Desafio Super Trunfo\n");


    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;
    float densidade1;
    float pibpercapita1;
    



    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    float densidade2;
    float pibpercapita2;

    
    printf("\nCarta 1\n");


    printf("Estado da Carta: ");
    scanf(" %c", &estado1);
    while (getchar() != '\n');

    printf("Codigo da Carta: ");
    scanf("%s", codigo1);
    while (getchar() != '\n');

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    while (getchar() != '\n');

    printf("Populacao: ");
    scanf("%d", &populacao1);
    while (getchar() != '\n');

    printf("Area: ");
    scanf("%f", &area1);
    while (getchar() != '\n');

    printf("PIB: ");
    scanf("%f", &pib1);
    while (getchar() != '\n');

    printf("Pontos Turisticos: ");
    scanf("%d", &turisticos1);
    while (getchar() != '\n');

    

    printf("\nCarta 2\n");

    printf("Estado da Carta: ");
    scanf(" %c", &estado2);
    while (getchar() != '\n');

    printf("Codigo da Carta: ");
    scanf("%s", codigo2);
    while (getchar() != '\n');

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    while (getchar() != '\n');

    printf("Populacao: ");
    scanf("%d", &populacao2);
    while (getchar() != '\n');

    printf("Area: ");
    scanf("%f", &area2);
    while (getchar() != '\n');

    printf("PIB: ");
    scanf("%f", &pib2);
    while (getchar() != '\n');

    printf("Pontos Turisticos: ");
    scanf("%d", &turisticos2);
    while (getchar() != '\n');

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibpercapita1 = (pib1 * 1000000000.0) / populacao1;
    pibpercapita2 = (pib2 * 1000000000.0) / populacao2;

    printf("\nDesafio Super Trunfo\n");

    printf("Estado da Carta: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);

    printf("\nEstado da Carta: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d Habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f Bilhoes de reais\n", pib2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Pontos Turisticos: %d\n", turisticos2);


    return 0;
}