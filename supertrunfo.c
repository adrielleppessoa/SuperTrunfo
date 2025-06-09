#include <stdio.h>


int main (){

    // incluindo as variáves da carta 1

    char estado1[12];
    char codigo1[10];
    char cidade1[10];
    unsigned long int populacao1;
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
    scanf("%s", estado1);

    printf("Digite o código da carta com três caracteres, sendo o primeiro a letra inicial do estado e os dois outros serão números (exemplo: estado é Maranhão, código M01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade (sem pontuações): \n");
    scanf("%lu", &populacao1);
    
    printf("Digite a área da cidade em quilometros quadrados (km²): \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos1);

    // incluindo as variáves da carta 2

    char estado2[12];
    char codigo2[10];
    char cidade2[10];
    unsigned long int populacao2;
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
    scanf(" %s", estado2);

    printf("Digite o código da carta com três caracteres, sendo o primeiro a letra inicial do estado e os dois outros serão números (exemplo: estado é Maranhão, código M01): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade (sem pontuações): \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em quilometros quadrados (km²): \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos2);

    printf("\n");
    printf("SUPER TRUNFO - CARTAS CADASTRADAS COM SUCESSO");
    printf("\n");

    // calculo da densidade, pib per capita e superpoder carta 1

    densipopula1 = (float) populacao1/area1;
    pibpercapita1 = (float) pib1/populacao1;
    superpoder1 = (float) populacao1+area1+pib1+pontosturisticos1+pibpercapita1-densipopula1;

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
    printf("População: %lu", populacao1);
    printf("\n");
    printf("Área: %.2f", area1);
    printf(" Km²");
    printf("\n");
    printf("PIB: %.2f", pib1);
    printf(" bilhões de reais");
    printf("\n");
    printf("Número de Pontos Turísticos: %d", pontosturisticos1);
    printf("\n");
    printf("Densidade Populacional: %.2f", densipopula1);
    printf(" hab/Km²");
    printf("\n");
    printf("PIB per Capita: %.2f", pibpercapita1);
    printf(" reais");
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
    printf("População: %lu", populacao2);
    printf("\n");
    printf("Área: %.2f", area2);
    printf(" Km²");
    printf("\n");
    printf("PIB: %.2f", pib2);
    printf(" bilhões de reais");
    printf("\n");
    printf("Número de Pontos Turísticos: %d", pontosturisticos2);
    printf("\n");
    printf("Densidade Populacional: %.2f", densipopula2);
    printf(" hab/Km²");
    printf("\n");
    printf("PIB per Capita: %.2f", pibpercapita2);
    printf(" reais");
    printf("\n");
    printf("Super Poder: %.2f", superpoder2);
    printf("\n");
    printf("\n");

    // Iniciando o Nível Avançado (Mestre) - Utilizando boas práticas

    int primeiroAtributo, segundoAtributo;
    float resultado1 = 0, resultado2 = 0, resultado1_2 = 0, resultado2_2 = 0;

    printf("Escolha o 1° Atributo:\n");
    printf("\n"); 

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &primeiroAtributo);
    
        switch (primeiroAtributo) {
            case 1:
                printf("\nVocê escolheu a opção: População\n");
                    if (populacao1 == populacao2) {
                        printf("\nEMPATE!!\n");
                    }
                    else {
                        printf("%s\n", populacao1 > populacao2 ? "=== Carta 1 VENCEU ===" : "=== Carta 2 VENCEU ===");
                    }
                    break;

            case 2:
                printf("\nVocê escolheu a opção: Área\n");
                    if (area1 == area2) {
                        printf("\nEMPATE!!\n");
                    }
                    else {
                        printf("%s\n", area1 > area2 ? "=== Carta 1 VENCEU ===" : "=== Carta 2 VENCEU ===");
                    }   
                    break;

            case 3:
                printf("\nVocê escolheu a opção: PIB\n");
                    if (pib1 == pib2) {
                        printf("\nEMPATE!!\n");
                    }
                    else {
                        printf("%s\n", pib1 > pib2 ? "=== Carta 1 VENCEU ===" : "=== Carta 2 VENCEU ===");
                    }
                    break;

            case 4: 
                printf("\nVocê escolheu a opção: Números de Pontos Turísticos\n");
                    if (pontosturisticos1 == pontosturisticos2) {
                        printf("\nEMPATE!!\n");
                    }
                    else {
                        printf("%s\n", pontosturisticos1 > pontosturisticos2 ? "=== Carta 1 VENCEU ===" : "=== Carta 2 VENCEU ===");
                    }
                    break;

            case 5:
                printf("\nVocê escolheu a opção: Densidade Demográfica\n");
                    if (densipopula1 == densipopula2) {
                        printf("\nEMPATE!!\n");
                    }
                    else {
                        printf("%s\n", densipopula1 < densipopula2 ? "=== Carta 1 VENCEU ===" : "=== Carta 2 VENCEU ===");
                    }
                    break;
                
        }

    printf("\nEscolha o 2° Atributo:\n");
    printf("\n--- ATENÇÃO: Você deve escolher um atributo diferente do primeiro! ---\n");
    printf("\n"); 

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    { 
        printf("Você escolheu o mesmo atributo!!\n");
    }
    else
    {
    
        switch (segundoAtributo)
        {

            case 1:
                printf("\nVocê escolheu a opção: População\n");
                    if (populacao1 == populacao2) {
                        printf("\nEMPATE!!\n");
                    }
                    else {
                        printf("%s\n", populacao1 > populacao2 ? "=== Carta 1 VENCEU ===" : "=== Carta 2 VENCEU ===");
                    }
                    break;

            case 2:
                printf("\nVocê escolheu a opção: Área\n");
                    if (area1 == area2) {
                        printf("\nEMPATE!!\n");
                    }
                    else {
                        printf("%s\n", area1 > area2 ? "=== Carta 1 VENCEU ===" : "=== Carta 2 VENCEU ===");
                    }   
                    break;

            case 3:
                printf("\nVocê escolheu a opção: PIB\n");
                    if (pib1 == pib2) {
                        printf("\nEMPATE!!\n");
                    }
                    else {
                        printf("%s\n", pib1 > pib2 ? "=== Carta 1 VENCEU ===" : "=== Carta 2 VENCEU ===");
                    }
                    break;

            case 4: 
                printf("\nVocê escolheu a opção: Números de Pontos Turísticos\n");
                    if (pontosturisticos1 == pontosturisticos2) {
                        printf("\nEMPATE!!\n");
                    }
                    else {
                        printf("%s\n", pontosturisticos1 > pontosturisticos2 ? "=== Carta 1 VENCEU ===" : "=== Carta 2 VENCEU ===");
                    }
                    break;

            case 5:
                printf("\nVocê escolheu a opção: Densidade Demográfica\n");
                    if (densipopula1 == densipopula2) {
                        printf("\nEMPATE!!\n");
                    }
                    else {
                        printf("%s\n", densipopula1 < densipopula2 ? "=== Carta 1 VENCEU ===\n" : "=== Carta 2 VENCEU ===\n");
                    }
                    break;

        }

    }

    // Soma dos atributos de cada carta

    printf("\n -- Soma dos Atributos Escolhidos de cada Carta -- \n");

        switch (primeiroAtributo) {
    case 1:
        resultado1 = populacao1;
        resultado2 = populacao2;
        break;
    case 2:
        resultado1 = area1;
        resultado2 = area2;
        break;
    case 3:
        resultado1 = pib1;
        resultado2 = pib2;
        break;
    case 4:
        resultado1 = pontosturisticos1;
        resultado2 = pontosturisticos2;
        break;
    case 5:
        resultado1 = densipopula1;
        resultado2 = densipopula2;
        break;
}

switch (segundoAtributo) {
    case 1:
        resultado1_2 = populacao1;
        resultado2_2 = populacao2;
        break;
    case 2:
        resultado1_2 = area1;
        resultado2_2 = area2;
        break;
    case 3:
        resultado1_2 = pib1;
        resultado2_2 = pib2;
        break;
    case 4:
        resultado1_2 = pontosturisticos1;
        resultado2_2 = pontosturisticos2;
        break;
    case 5:
        resultado1_2 = densipopula1;
        resultado2_2 = densipopula2;
        break;
}
  
float soma1 = resultado1 + resultado1_2;
float soma2 = resultado2 + resultado2_2;

printf("\nSOMA DOS ATRIBUTOS ESCOLHIDOS:\n\n");
printf("Carta 1: %.2f\n", soma1);
printf("Carta 2: %.2f\n", soma2);

    if (soma1 == soma2) {
    printf("\n=== EMPATE NA SOMA ===\n\n");
    }   
    else {
    printf("%s\n", soma1 > soma2 ? "\n=== CARTA 1 VENCEU NA SOMA ===\n" : "=== CARTA 2 VENCEU NA SOMA ===\n");
    }

    return 0;

}

