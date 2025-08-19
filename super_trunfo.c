#include <stdio.h>
int main()
{

    // carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float areaCidade1;
    float pibCidade1;
    int turismo1;

    //carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float areaCidade2;
    float pibCidade2;
    int turismo2;

    printf("JOGAR SUPER TRUNFO ? \n");
    printf("Digite os dados da primeira carta: \n");
    printf("Defina uma letra para o estado escolhido de (A-H): \n");
    scanf(" %c", &estado1);

    printf("Defina um código para a carta de (01-04): \n");
    scanf(" %s", &codigo1);


    printf("Defina uma cidade para a carta: \n");
    scanf(" %s", &cidade1);

    printf("Defina o número populacinal dessa cidade para a carta: \n");
    scanf(" %d", &populacao1);

    printf("Defina a área dessa cidade para a carta: \n");
    scanf(" %f", &areaCidade1);

    printf("Defina o PIB dessa cidade para a carta: \n");
    scanf(" %f", &pibCidade1);

    printf("Defina quantos pontos turísticos essa cidade para a carta: \n");
    scanf(" %d", &turismo1);


    printf("QUASE LÁ\nDigite agora os dados referentes a segunda carta. \n");
    printf("Defina uma letra para o estado escolhido de (A-H): \n");
    scanf(" %c", &estado2);

    printf("Defina um código para a carta de (01-04): \n");
    scanf(" %s", &codigo2);


    printf("Defina uma cidade para a carta: \n");
    scanf(" %s", &cidade2);

    printf("Defina o número populacinal dessa cidade para a carta: \n");
    scanf(" %d", &populacao2);

    printf("Defina a área dessa cidade para a carta: \n");
    scanf(" %f", &areaCidade2);

    printf("Defina o PIB dessa cidade para a carta: \n");
    scanf(" %f", &pibCidade2);

    printf("Defina quantos pontos turísticos essa cidade para a carta: \n");
    scanf(" %d", &turismo2);


    //Saída
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", areaCidade1);
    printf("PIB: %f\n", pibCidade1);
    printf("Número de pontos turísticos: %d\n", turismo1);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", areaCidade2);
    printf("PIB: %f\n", pibCidade2);
    printf("Número de pontos turísticos: %d\n", turismo2);


    return 0;
}