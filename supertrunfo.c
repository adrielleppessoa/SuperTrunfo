#include <stdio.h>

int main (){

    char estado[10];
    char codigo[3];
    char cidade[10];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("SUPER TRUNFO\n");
    printf("\n");   

     // carta 1

    printf("Carta 1\n");
    printf("\n");

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado);

    printf("Digite o código da carta com três caracteres, sendo o primeiro a letra inicial do estado e os dois outros serão números (exemplo: estado é pernambuco, código P01): \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o número de habitantes da cidade (sem pontuações): \n");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade em quilometros quadrados (km²): \n");
    scanf("%f", &area);

    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos);







}