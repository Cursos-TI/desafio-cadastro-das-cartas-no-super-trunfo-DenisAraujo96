#include <stdio.h>
 
 int main() {
 
     // Variáveis da primeira carta
     char estado1;
     char codigo1[4]; 
     char cidade1[50];
     unsigned long int populacao1;
     float area1;
     float pib1, DensPopulacional1, PIBperCapta1, SuperPoder1;
     int pontos_turisticos1;
 
     // Variáveis da segunda carta
     char estado2;
     char codigo2[4];
     char cidade2[50];
     unsigned long int populacao2;
     float area2;
     float pib2, DensPopulacional2,PIBperCapta2, SuperPoder2;
     int pontos_turisticos2;
 
     // entrada da primeira carta
     printf("Cadastro da carta 1:\n");    
     printf("Estado (A-H): ");                           //estado
     scanf(" %c", &estado1);                         
     printf("Código da carta EX(A01): ");
     scanf("%s", codigo1);                               //codigo
     printf("Nome da cidade: ");
     scanf(" %[^\n]", cidade1);                          //cidade
     printf("Número da população: ");
     scanf("%d", &populacao1);                           //população
     printf("Área (em km²) da cidade: ");
     scanf("%f", &area1);                                //area
     printf("PIB da cidade (Bilhões de reais): ");
     scanf("%f", &pib1);                                 //pib
     printf("Pontos turísticos da cidade: ");
     scanf("%d", &pontos_turisticos1);                   //pontos_turisticos
 
     // Entrada de dados carta 2
     printf("\nCadastro da carta 2:\n");    
     printf("Estado (A-H): ");
     scanf(" %c", &estado2);                             //estado
     printf("Código da carta EX(A01): ");
     scanf("%s", codigo2);                               //codigo
     printf("Nome da cidade: ");
     scanf(" %[^\n]", cidade2);                          //cidade
     printf("Número da população: ");
     scanf("%d", &populacao2);                           //população
     printf("Área (em km²) da cidade: ");
     scanf("%f", &area2);                                //area
     printf("PIB da cidade (Bilhões de reais): ");
     scanf("%f", &pib2);                                 //pib
     printf("Pontos turísticos da cidade: ");
     scanf("%d", &pontos_turisticos2);                   //pontos turisticos
 
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
 
     //calculos carta1
     DensPopulacional1 = populacao1 / area1;
     PIBperCapta1 = pib1 / populacao1;
     SuperPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + PIBperCapta1;
 
     //calculos carta2
     DensPopulacional2 = populacao2 / area1;
     PIBperCapta2 = pib2 / populacao2;
     SuperPoder2 = populacao2+ area2 + pib2 + pontos_turisticos2 + PIBperCapta2;    
    
     //Comparaçao
     printf ("Comparando as cartas \n");
     printf ("população: \n");               //população
         if   (populacao1 > populacao2){
             printf ("carta 1 vence \n");
         }else{
             printf ("carta 2 vence \n");
         }
     printf ("area: \n");                    //area
         if  (area1 > area2){
             printf ("carta 1 vence \n");
         }else{
             printf ("carta 2 vence \n");
         }
     printf ("PIB: /n");                     //pib
         if (pib1 > pib2){
             printf ("carta 1 vence \n");
         }else{
             printf ("carta 2 vence \n");
         }
     printf ("Pontos Turisticos: \n");       //pontos turisticos
         if (pontos_turisticos1 > pontos_turisticos2){
             printf("carta 1 vence \n");
         }else{
             printf("carta 2 vence \n");
         }
     printf ("Densidade Populacional: \n");   //Densidade Populacioal
         if (DensPopulacional1 < DensPopulacional2){
             printf ("carta 1 vence \n");
         }else{
             printf ("carta 2 vence \n");
         }
     printf ("Super Poder: \n");             //Super Poder
         if (SuperPoder1 > SuperPoder2){
             printf("carta 1 vence \n");
         }else{
             printf ("carta 2 vence \n");
         }
     return 0;
 }
