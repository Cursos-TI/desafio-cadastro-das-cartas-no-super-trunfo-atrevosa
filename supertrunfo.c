// Desafios Super Trunfo - Joana

#include <stdio.h>

//main

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

//organização apresentação do programa
        printf("\n");

    printf("SUPER TRUNFO! \n");
    printf("Carregando...... \n");

        printf("\n");
        printf("\n");

//primeira carta (dados)
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", &nomeCidade1);

/* aqui nao entendi porque que dá o erro: 
"formats '%s' expects argument of type 'char*', but argument 2 has type 'char(*)[50]' [-Wformat=] gcc Ln 32, Col 14 e Ln 51, Col 14
porque o codigo continua executável mas apresenta esses dois erros (iguais) no tipo char...
  */

printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área (em km²) somente números: ");
    scanf(" %f", &area1);
    printf("PIB (em bilhões de reais) somente números: ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos1);   

 //segunda carta (entrada de dados)
        printf("\n");

    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", &nomeCidade2);
    /* aqui aparece o mesmo erro de cima mas não faz o programa ter erros na execução */

    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área (em km²) somente números: ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões de reais) somente números: ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos2);

        printf("\n");
        printf("\n");


//exibição dos dados (resultados)

    printf("Carregando...... \n");
    printf("Confira os dados das cartas! \n");
        printf("\n");
  
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    // nivel básico

    return 0;
    
}