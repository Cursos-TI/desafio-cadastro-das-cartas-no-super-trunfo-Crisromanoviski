#include <stdio.h>

    int main(){
        // Dados da Carta 1: Curitiba - PR
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "Curitiba";
    int populacao1 = 1948626;
    float area1 = 432.00;
    float pib1 = 87.5; // em bilhões de reais
    int pontos_turisticos1 = 30;

        // Dados da Carta 2: Joinville - SC
    char estado2 = 'B';
    char codigo2[] = "B02";
    char cidade2[] = "Joinville";
    int populacao2 = 597658;
    float area2 = 1100.00;
    float pib2 = 20.6; // em bilhões de reais
    int pontos_turisticos2 = 25;

    // Exibindo os dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontos_turisticos1);

    // Exibindo os dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}