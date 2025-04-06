#include <stdio.h>

//main
int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosturisticos1, pontosturisticos2;    

    //CODIGOS DE ENTRADA DE DADOS

    printf("\n");

    printf("SUPER TRUNFO! \n");
    printf("Carregando...... \n");

    printf("\n");

    //PRIMEIRA CARTA

    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade1);
    printf("População: ");
    scanf(" %lu", &populacao1); // Alterado para %lu
    printf("Área (em km²) somente números: ");
    scanf(" %f", &area1);
    printf("PIB (em bilhões de reais) somente números: ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos1);   

    //SEGUNDA CARTA

    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade2);
    printf("População: ");
    scanf(" %lu", &populacao2); // Alterado para %lu
    printf("Área (em km²) somente números: ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões de reais) somente números: ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos2);

    // CALCULOS DA PARTE 2 - DENSIDADE E PIB PER CAPTA FOI NECESSARIO CONVERTER PRA REAIS PRA PODER FUNCIONAR, ESTAVA DANDO ERRO DE INF NO CALCULO

    float densidade1 = (float)populacao1 / area1;
    float pibpc1 = pib1 * 1000000000 / populacao1; // Convertendo PIB para reais
    float densidade2 = (float)populacao2 / area2;
    float pibpc2 = pib2 * 1000000000 / populacao2; // Convertendo PIB para reais

    // EXIBIÇÃO SAIDA

    printf("\nCarregando...... \n");
    printf("Confira os dados das cartas! \n");
  
    printf("\nCarta 1:\n");
    printf("\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);  // Corrigido para %lu
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("\nCarta 2:\n");
    printf("\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);  // Corrigido para %lu
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    // EXIBIÇÃO DO CALCULO DE DENSIDADE E PIB
    
    printf("\n--- Resultado de Cálculos Densidade & PIB ---\n");
    printf("Carta 1:\n");
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibpc1);
    printf("\nCarta 2:\n");
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibpc2);

    // Parte Final

    // Cálculos do Super Poder

    float inversoDensidade1 = 1.0 / densidade1;
    float superPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpc1 + inversoDensidade1;

    float inversoDensidade2 = 1.0 / densidade2;
    float superPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpc2 + inversoDensidade2;

    printf("=== Entrando na parte de comparação ===\n");

    // Cálculos de comparação
    int vPopulacao = populacao1 > populacao2;
    int vArea = area1 > area2;
    int vPIB = pib1 > pib2;
    int vPontos = pontosturisticos1 > pontosturisticos2;
    int vDensidade = densidade1 < densidade2; // menor vence
    int vPIBpc = pibpc1 > pibpc2;
    int vSuperPoder = superPoder1 > superPoder2;

    // Exibição saída

    printf("\n\nComparação de Cartas:\n\n");
    printf("População: Carta 1 venceu (%d)\n", vPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", vArea);
    printf("PIB: Carta 1 venceu (%d)\n", vPIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", vPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", vDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", vPIBpc);
    printf("Super Poder: Carta 1 venceu (%d)\n", vSuperPoder);

    return 0;
}