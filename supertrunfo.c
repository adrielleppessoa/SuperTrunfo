#include <stdio.h>

int main (){

    char estado1[10];
    char codigo1[10];
    char cidade1[10];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    printf("SUPER TRUNFO\n");
    printf("\n");   

     // carta 1

    printf("Carta 1\n");
    printf("\n");

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta com três caracteres, sendo o primeiro a letra inicial do estado e os dois outros serão números (exemplo: estado é Maranhão, código M01): \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o número de habitantes da cidade (sem pontuações): \n");
    scanf("%d", &populacao1);
    
    printf("Digite a área da cidade em quilometros quadrados (km²): \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos1);

    char estado2[10];
    char codigo2[10];
    char cidade2[10];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

// carta 2

    printf("\n");
    printf("Carta 2\n");
    printf("\n");

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta com três caracteres, sendo o primeiro a letra inicial do estado e os dois outros serão números (exemplo: estado é Maranhão, código M01): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o número de habitantes da cidade (sem pontuações): \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilometros quadrados (km²): \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos2);

    printf("\n");
    printf("SUPER TRUNFO - CARTAS CADASTRADAS COM SUCESSO");
    printf("\n");

    printf("\n");
    printf("Carta 1: \n");
    printf("\n");
    printf("Estado: %s", estado1);
    printf("\n");
    printf("Código da Carta: %s", codigo1);
    printf("\n");
    printf("Cidade: %s", cidade1);
    printf("\n");
    printf("População: %d", populacao1);
    printf("\n");
    printf("Área: %f", area1);
    printf(" Km² %s");
    printf("\n");
    printf("PIB: %f", pib1);
    printf(" bilhões de reais %s");
    printf("\n");
    printf("Número de Pontos Turísticos: %d", pontosturisticos1);
    printf("\n");

    printf("\n");
    printf("Carta 2: \n");
    printf("\n");
    printf("Estado: %s", estado2);
    printf("\n");
    printf("Código da Carta: %s", codigo2);
    printf("\n");
    printf("Cidade: %s", cidade2);
    printf("\n");
    printf("População: %d", populacao2);
    printf("\n");
    printf("Área: %f", area2);
    printf(" Km² %s");
    printf("\n");
    printf("PIB: %f", pib2);
    printf(" bilhões de reais %s");
    printf("\n");
    printf("Número de Pontos Turísticos: %d", pontosturisticos2);
    printf("\n");
    printf("\n");

    return 0;

}