#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char estado[3];
    char codigo[4];
    char nomeCidade[50];
    long int populacao;
    float area;
    float pib; // em bilhões
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
    float superPoder;
} Carta;

    // Função para entrada dos dados de uma carta 
    void lerCarta(Carta *carta, int numero){ 
    
    printf("───────────────── ⋆⋅☆⋅⋆ ────────────────\n");
    printf("✦✦ Cadastro da Carta %d ✦✦ \n",numero);
    printf("┌───────────────── ⋆⋅☆⋅⋆ ────────────────┐\n");
    printf("│➜ Digite o Estado (ex: SP) ");
    scanf("%s", &carta->estado);
    printf("│➜ Digite o Código da Carta (ex: A01): ");
    scanf("%s", &carta->codigo);   
    printf("│➜ Digite o Nome da Cidade: ");
    while (getchar() != '\n');
    fgets(carta->nomeCidade, 50, stdin);
    carta->nomeCidade[strcspn(carta->nomeCidade, "\n")] = 0;    
    printf("│➜ Digite a População: ");
    scanf("%ld", &carta->populacao);
    printf("│➜ Digite a Área (em km²): ");
    scanf("%f", &carta->area);
    printf("│➜ Digite o PIB: ");
    scanf("%f", &carta->pib);
    printf("│➜ Digite os Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
    printf("└──────────────────────────────────────┘\n");    
    }
    
    // Função para calcular atributos derivados da carta
    void calcularDados(Carta *c) {
    c->densidade = c->populacao / c->area;
    c->pibPerCapita = (c->pib * 1000000000) / c->populacao;
    c->superPoder = (float)c->populacao + c->area + (c->pib * 1000000000) + c->pontosTuristicos + c->pibPerCapita + (1 / c->densidade);
}

    void exibirCarta(Carta c, int numero) {
    printf("┌───────────────── ⋆⋅☆⋅⋆ ────────────────┐\n");
    printf("│✦✦ Carta %d ✦✦ \n",numero);
    printf("│Estado: %s\n", c.estado);
    printf("│Código: %s\n", c.codigo);
    printf("│Nome da Cidade: %s\n", c.nomeCidade);
    printf("│População: %d\n", c.populacao);
    printf("│Área: %.2f km²\n", c.area);
    printf("│PIB: %.2f bilhões de reais\n", c.pib);
    printf("│Número de Pontos Turísticos: %d\n", c.pontosTuristicos);
    printf("│Densidade Populacional: %.2f hab/km²\n", c.densidade);
    printf("│PIB per Capita: %.2f reais\n", c.pibPerCapita);
    printf("│Super Poder: %.2f\n", c.superPoder);
    printf("└────────────────────────────────────────┘\n");
    }

// Função para comparar atributos e exibir resultados
void compararCartas(Carta c1, Carta c2) {
    
    printf("┌───────────────── ⋆⋅☆⋅⋆ ────────────────┐\n");
    printf("│\n✦✦ Comparação de Cartas ✦✦\n");
    printf("│População: Carta 1 venceu (%d)\n", c1.populacao > c2.populacao);
    printf("│Área: Carta 1 venceu (%d)\n", c1.area > c2.area);
    printf("│PIB: Carta 1 venceu (%d)\n", c1.pib > c2.pib);
    printf("│Pontos Turísticos: Carta 1 venceu (%d)\n", c1.pontosTuristicos > c2.pontosTuristicos);
    printf("│Densidade Populacional: Carta 1 venceu (%d)\n", c1.densidade < c2.densidade); // menor vence
    printf("│PIB per Capita: Carta 1 venceu (%d)\n", c1.pibPerCapita > c2.pibPerCapita);
    printf("│Super Poder: Carta 1 venceu (%d)\n", c1.superPoder > c2.superPoder);
    printf("└────────────────────────────────────────┘\n");
}


int main(){  

    printf("✦ Super Trunfo - Países - Cartas ✦\n");
    Carta carta1, carta2;

    lerCarta(&carta1, 1);
    calcularDados(&carta1);

    lerCarta(&carta2, 2);
    calcularDados(&carta2);

    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    compararCartas(carta1, carta2);    

    
    return 0;
}
