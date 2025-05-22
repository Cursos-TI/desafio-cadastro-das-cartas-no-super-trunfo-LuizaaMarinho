#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    // Declaração de variáveis para a carta 1
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaraçao de variáveis para a carta 2
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // leitura dos dados da carta 1
    printf("✦ Super Trunfo - Países - Cartas ✦\n");
    printf("───────────────── ⋆⋅☆⋅⋆ ────────────────\n");
    printf("✦✦ Cadastro da Carta 1 ✦✦ \n");

    printf("┌───────────────── ⋆⋅☆⋅⋆ ────────────────┐\n");
    printf("│➜ Digite o Estado (ex: SP) ");
    scanf("%s", &estado1);
    printf("│➜ Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);   
    printf("│➜ Digite o Nome da Cidade: ");
    while (getchar() != '\n');
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;    
    printf("│➜ Digite a População: ");
    scanf("%d", &populacao1);
    printf("│➜ Digite a Área (em km²): ");
    scanf("%f", &area1);
    printf("│➜ Digite o PIB: ");
    scanf("%f", &pib1);
    printf("│➜ Digite os Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("└──────────────────────────────────────┘\n");

    printf("\n");

    // Leitura dos dados da Carta 2
    
    printf("───────────────── ⋆⋅☆⋅⋆ ────────────────\n");
    printf("✦✦ Cadastro da Carta 2 ✦✦\n");   
    printf("┌───────────────── ⋆⋅☆⋅⋆ ────────────────┐\n");
    printf("│➜ Digite o Estado (ex: SP): ");
    scanf(" %s", &estado2);
    printf("│➜ Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);   
    printf("│➜ Digite o Nome da Cidade: ");
    while (getchar() != '\n');
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;  
    printf("│➜ Digite a População: ");
    scanf("%d", &populacao2);
    printf("│➜ Digite a Área (em km²): ");
    scanf("%f", &area2);
    printf("│➜ Digite o PIB: ");
    scanf("%f", &pib2);
    printf("│➜ Digite os Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);
    printf("└──────────────────────────────────────┘\n");

    // Exibição das cartas
    printf("┌───────────────── ⋆⋅☆⋅⋆ ────────────────┐\n");
    printf("│✦✦ Carta 1 ✦✦ \n");
    printf("│Estado: %s\n", estado1);
    printf("│Código: %s\n", codigo1);
    printf("│Nome da Cidade: %s\n", nomeCidade1);
    printf("│População: %d\n", populacao1);
    printf("│Área: %.2f km²\n", area1);
    printf("│PIB: %.2f bilhões de reais\n", pib1);
    printf("│Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("│\n");
    printf("│✦✦ Carta 2 ✦✦\n");
    printf("│Estado: %s\n", estado2);
    printf("│Código: %s\n", codigo2);
    printf("│Nome da Cidade: %s\n", nomeCidade2);
    printf("│População: %d\n", populacao2);
    printf("│Área: %.2f km²\n", area2);
    printf("│PIB: %.2f bilhões de reais\n", pib2);
    printf("│Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("└────────────────────────────────────────┘\n");

    
    return 0;
}
