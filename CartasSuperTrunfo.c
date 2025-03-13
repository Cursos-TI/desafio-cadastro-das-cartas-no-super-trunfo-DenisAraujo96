#include <stdio.h>

int main() {

    // Variáveis da primeira carta
    char estado1;
    char codigo1[4]; 
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1; 
    int pontos_turisticos1;

    // Variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2; 
    int pontos_turisticos2;

    // entrada da primeira carta
    printf("Cadastro da carta 1:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Código da carta EX(A01): ");
    scanf("%s", codigo1); 

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Número da população: ");
    scanf("%d", &populacao1);

    printf("Área (em km²) da cidade: ");
    scanf("%f", &area1);

    printf("PIB da cidade (Bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1); 

    // Entrada de dados carta 2
    printf("\nCadastro da carta 2:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2); 

    printf("Código da carta EX(A01): ");
    scanf("%s", codigo2); 

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Número da população: ");
    scanf("%d", &populacao2);

    printf("Área (em km²) da cidade: ");
    scanf("%f", &area2);

    printf("PIB da cidade (Bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2); 

    // Exibição de dados carta 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1); 
    printf("Nome da cidade: %s\n", cidade1); 
    printf("População: %d\n", populacao1);
    printf("Área da cidade: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    // Exibição de dados carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2); 
    printf("Nome da cidade: %s\n", cidade2); 
    printf("População: %d\n", populacao2);
    printf("Área da cidade: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}
