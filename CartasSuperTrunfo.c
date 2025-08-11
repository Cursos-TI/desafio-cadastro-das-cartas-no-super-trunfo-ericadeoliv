#include <stdio.h>

int main(){
    // variáveis da Carta 1
    char estado1, codigo1[5], cidade1[20]; 
    int populacao1, pontosturisticos1;
    float area1, pib1;

    // variáveis da Carta 2
    char estado2, codigo2[5], cidade2[20];
    int populacao2, pontosturisticos2;
    float area2, pib2;

    // Cadastramento da Carta 1
    printf("\n---- Cadastro da Carta 1------");
    printf("\nDigite a letra de A a H que representa o estado:\n");
    scanf("%c",&estado1);
    printf("\nDigite o código da carta, ou seja, a letra do estado seguida de um número 01 a 04:\n");
    scanf("%s", &codigo1);
    printf("\nDigite o nome da cidade: \n");
    scanf("%s", &cidade1);
    printf("\nDigite o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);
    printf("\nDigite a área da cidade (em km²): \n");
    scanf("%f", &area1);
    printf("\nDigite o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("\nDigite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos1);
    printf("\n Cadastramento da Carta 1 concluído!\n");

    // Cadastramento da Carta 2
    printf("\n---- Cadastro da Carta 2 ------");
    printf("\nDigite uma letra de A a H, que represente um dos oito estados:\n");
    scanf("%c", &estado2);
    printf("\nDigite o código da carta, ou seja, a letra do estado seguida de um número 01 a 04:\n");
    scanf("%s", &codigo2);
    printf("\nDigite o nome da cidade:\n");
    scanf("%s", &cidade2);
    printf("\nDigite o número de habitantes da cidade:\n");
    scanf("%s", &populacao2);
    printf("\nDigite a área da cidade (em km²):\n");
    scanf("%d", &area2);
    printf("\nDigite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("\nDigite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pontosturisticos2);
    printf("\nCadastramento da Carta 2 concluído!");

    // Impressão Carta 1
    printf("\n\n --- Carta 1");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da cidade: %s", cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %f", area1, "km²");
    printf("\nPIB: %f", pib1, "de reais");
    printf("\nPontos Turísticos: %d", pontosturisticos1);

    // Impressão Carta 2
    printf("\n\n --- Carta 2");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da cidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %f", area2, "km²");
    printf("\nPIB: %f", pib2, "de reais");
    printf("\nPontos Turísticos: %d", pontosturisticos2);
    
    return 0;

}