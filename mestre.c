#include <stdio.h>

int main() {
    
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float areaCidade1;
    float pibCidade1;
    int turismo1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;
    
    
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float areaCidade2;
    float pibCidade2;
    int turismo2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;
    
    // DADOS - CARTA 1 
    printf("===================================\n");
    printf("Digite os dados da primeira carta:\n");
    printf("===================================\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    
    printf("População: ");
    scanf("%lu", &populacao1);
    
    printf("Área (km²): ");
    scanf("%f", &areaCidade1);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pibCidade1);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &turismo1);
    
    // DADOS - CARTA 2
    printf("\n===================================\n");
    printf("Digite os dados da segunda carta:\n");
    printf("===================================\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);  
    
    printf("População: ");
    scanf("%lu", &populacao2);
    
    printf("Área (km²): ");
    scanf("%f", &areaCidade2);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pibCidade2);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &turismo2);
    
    // CÁLCULOS - CARTA 1
    densidade1 = (float)populacao1 / areaCidade1;
    pibPerCapita1 = (pibCidade1 * 1000000000) / populacao1;  // Converte bilhões para reais
    superPoder1 = (float)populacao1 + areaCidade1 + pibCidade1 + (float)turismo1 + pibPerCapita1 + (1.0f / densidade1);
    
    // CÁLCULOS - CARTA 2 
    densidade2 = (float)populacao2 / areaCidade2;
    pibPerCapita2 = (pibCidade2 * 1000000000) / populacao2;  // Converte bilhões para reais
    superPoder2 = (float)populacao2 + areaCidade2 + pibCidade2 + (float)turismo2 + pibPerCapita2 + (1.0f / densidade2);
    
    // DADOS - CARTA 1 
    printf("\n========================================\n");
    printf("Carta 1:\n");
    printf("========================================\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", areaCidade1);
    printf("PIB: %.2f bilhões de reais\n", pibCidade1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    
    //  DADOS - CARTA 2 
    printf("\n========================================\n");
    printf("Carta 2:\n");
    printf("========================================\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f bilhões de reais\n", pibCidade2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    
    //  COMPARAÇÕES 
    int popVence = populacao1 > populacao2;
    int areaVence = areaCidade1 > areaCidade2;
    int pibVence = pibCidade1 > pibCidade2;
    int turismoVence = turismo1 > turismo2;
    int densidadeVence = densidade1 < densidade2;  // Menor densidade vence!
    int pibPCVence = pibPerCapita1 > pibPerCapita2;
    int superPoderVence = superPoder1 > superPoder2;
    
    //  RESULTADOS 
    printf("\n========================================\n");
    printf("Comparação de Cartas:\n");
    printf("========================================\n");
    printf("População: Carta %d venceu (%d)\n", popVence ? 1 : 2, popVence);
    printf("Área: Carta %d venceu (%d)\n", areaVence ? 1 : 2, areaVence);
    printf("PIB: Carta %d venceu (%d)\n", pibVence ? 1 : 2, pibVence);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", turismoVence ? 1 : 2, turismoVence);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadeVence ? 1 : 2, densidadeVence);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPCVence ? 1 : 2, pibPCVence);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoderVence ? 1 : 2, superPoderVence);
    printf("========================================\n");
    
    return 0;
}