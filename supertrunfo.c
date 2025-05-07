#include <stdio.h>

int main (){

    // incluindo as variáves da carta 1

    char estado1[12];
    char codigo1[10];
    char cidade1[10];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densipopula1;
    float pibpercapita1;
    float superpoder1;

    // solicitando os dados da carta 1 ao usuário 

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

    // calculo da densidade, pib per capita e superpoder carta 1

    densipopula1 = (float) populacao1/area1;
    pibpercapita1 = (float) pib1/populacao1;
    superpoder1 = (float) populacao1+area1+pib1+pontosturisticos1+pibpercapita1-densipopula1;

    // incluindo as variáves da carta 2

    char estado2[12];
    char codigo2[10];
    char cidade2[10];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densipopula2;
    float pibpercapita2;
    float superpoder2;

     // solicitando os dados da carta 2 ao usuário 

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

    // calculo da densidade, pib per capita e superpoder carta 2

    densipopula2 = (float) populacao2/area2;
    pibpercapita2 = (float) pib2/populacao2;
    superpoder2 = (float) populacao2+area2+pib2+pontosturisticos2+pibpercapita2-densipopula2;

    // mostrando os resultados dos dados inputados pelos usuários da carta 1

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
    printf("Área: %.2f", area1);
    printf(" Km² %s");
    printf("\n");
    printf("PIB: %.2f", pib1);
    printf(" bilhões de reais %s");
    printf("\n");
    printf("Número de Pontos Turísticos: %d", pontosturisticos1);
    printf("\n");
    printf("Densidade Populacional: %.2f", densipopula1);
    printf(" hab/Km² %s");
    printf("\n");
    printf("PIB per Capita: %.2f", pibpercapita1);
    printf(" reais %s");
    printf("\n");
    printf("Super Poder: %.2f", superpoder1);
    printf("\n");

    // mostrando os resultados dos dados inputados pelos usuários da carta 2

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
    printf("Área: %.2f", area2);
    printf(" Km² %s");
    printf("\n");
    printf("PIB: %.2f", pib2);
    printf(" bilhões de reais %s");
    printf("\n");
    printf("Número de Pontos Turísticos: %d", pontosturisticos2);
    printf("\n");
    printf("Densidade Populacional: %.2f", densipopula2);
    printf(" hab/Km² %s");
    printf("\n");
    printf("PIB per Capita: %.2f", pibpercapita2);
    printf(" reais %s");
    printf("\n");
    printf("Super Poder: %.2f", superpoder2);
    printf("\n");
    printf("\n");

    // mostrando os resultados da comparação de cartas 

    printf("\n");
    printf("COMPARAÇÃO DE CARTAS:");
    printf("\n");

    printf("\n");
    printf("População: %d", populacao1>populacao2);
    printf("\n");
    printf("Área: %d", area1>area2);
    printf("\n");
    printf("PIB: %d", pib1>pib2);
    printf("\n");
    printf("Número de Pontos Turísticos: %d", pontosturisticos1>pontosturisticos2);
    printf("\n");
    printf("Densidade Populacional: %d", densipopula1<densipopula2);
    printf("\n");
    printf("PIB per Capita: %d", pibpercapita1>pibpercapita2);
    printf("\n");
    printf("Super Poder: %d", superpoder1>superpoder2);
    printf("\n");
    printf("\n");


    return 0;

}