#include <stdio.h>

//main
int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2; //mudança pra unsigned
    float area1, area2, pib1, pib2;
    int pontosturisticos1, pontosturisticos2;    

    //CODIGOS DE ENTRADA DE DADOS (estetica kkk)

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
    scanf(" %lu", &populacao1); // Alterado para %lu depois de trocar pra unsigned
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
    scanf(" %lu", &populacao2); // %lu tbm ok
    printf("Área (em km²) somente números: ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões de reais) somente números: ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos2);

    // CALCULOS DA PARTE 2 - DENSIDADE E PIB PER CAPTA FOI NECESSARIO CONVERTER PRA REAIS PRA PODER FUNCIONAR, ESTAVA DANDO ERRO DE INF NO CALCULO

    float densidade1 = (float)populacao1 / area1;
    float pibpc1 = pib1 * 1000000000 / populacao1;
    float densidade2 = (float)populacao2 / area2;
    float pibpc2 = pib2 * 1000000000 / populacao2;

    // EXIBIÇÃO SAIDA

    printf("\nCarregando...... \n"); //estetica
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

    // EXIBIÇÃO DO CALCULO DE DENSIDADE E PIB - parte 2
    
    printf("\n--- Resultado de Cálculos Densidade & PIB ---\n");
    printf("Carta 1:\n");
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibpc1);
    printf("\nCarta 2:\n");
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibpc2);
    printf("\n");

    // Parte Final

    // Cálculos do Super Poder parte 3 do codigo

    float inversoDensidade1 = 1.0 / densidade1;
    float superPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpc1 + inversoDensidade1;

    float inversoDensidade2 = 1.0 / densidade2;
    float superPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpc2 + inversoDensidade2;

        // Cálculos de comparação das cartas

    int vPopulacao = populacao1 > populacao2;
    int vArea = area1 > area2;
    int vPIB = pib1 > pib2;
    int vPontos = pontosturisticos1 > pontosturisticos2;
    int vDensidade = densidade1 < densidade2;
    int vPIBpc = pibpc1 > pibpc2;
    int vSuperPoder = superPoder1 > superPoder2;

    //teste de calculo
    printf("\n=== Teste de Calculo Densidade ===\n");
    printf("Densidade Populacional Carta 1: %.2f\n", densidade1);
    printf("Densidade Populacional Carta 2: %.2f\n", densidade2);
    
    // Exibição saída final com cartas vencedoras

    printf("\nComparação das Cartas:\n\n");

// O número 1 indica que a Carta 1 venceu, o número 0 indica que a Carta 2 venceu

    printf("População: Carta %d venceu (%d)\n", vPopulacao ? 1 : 2, vPopulacao);
    printf("Área: Carta %d venceu (%d)\n", vArea ? 1 : 2, vArea);
    printf("PIB: Carta %d venceu (%d)\n", vPIB ? 1 : 2, vPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", vPontos ? 1 : 2, vPontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vDensidade ? 1 : 2, vDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vPIBpc ? 1 : 2, vPIBpc);
    printf("Super Poder: Carta %d venceu (%d)\n", vSuperPoder ? 1 : 2, vSuperPoder);


    return 0;
}
