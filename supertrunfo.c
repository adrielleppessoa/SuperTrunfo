#include <stdio.h>
#include <termios.h>
#include <unistd.h>


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

    // calculo da densidade, pib per capita e superpoder carta 1

    densipopula1 = (float) populacao1/area1;
    pibpercapita1 = (float) pib1/populacao1;
    superpoder1 = (float) populacao1+area1+pib1+pontosturisticos1+pibpercapita1-densipopula1;

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

    /* mostrando os resultados da comparação de cartas 

    printf("\n");
    printf("COMPARAÇÃO DE CARTAS (Atributo: População):");
    printf("\n");
    printf("Carta 1 - %s", estado1);
    printf(" : %lu", populacao1);
    printf("\n");
    printf("Carta 2 - %s", estado2);
    printf(" : %lu", populacao2);

    printf("\n");
    if (populacao1>populacao2) {
        printf("Resultado: Carta 1 (%s", estado1);
        printf(") venceu!");
    }
    else{
        printf("Resultado: Carta 2 (%s", estado2);
        printf(") venceu!");
    }
    printf("\n");

    printf("\n");
    printf("COMPARAÇÃO DE CARTAS (Atributo: Área):");
    printf("\n");
    printf("Carta 1 - %s", estado1);
    printf(" : %.2f", area1);
    printf(" km²");
    printf("\n");
    printf("Carta 2 - %s", estado2);
    printf(" : %.2f", area2);
    printf(" Km²");

    printf("\n");
    if (area1>area2) {
        printf("Resultado: Carta 1 (%s", estado1);
        printf(") venceu!");
    }
    else{
        printf("Resultado: Carta 2 (%s", estado2);
        printf(") venceu!");
    }
    printf("\n");

    printf("\n");
    printf("COMPARAÇÃO DE CARTAS (Atributo: PIB):");
    printf("\n");
    printf("Carta 1 - %s", estado1);
    printf(" : %.2f", pib1);
    printf(" bilhões de reais");
    printf("\n");
    printf("Carta 2 - %s", estado2);
    printf(" : %.2f", pib2);
    printf(" bilhões de reais");

    printf("\n");
    if (pib1>pib2) {
        printf("Resultado: Carta 1 (%s", estado1);
        printf(") venceu!");
    }
    else{
        printf("Resultado: Carta 2 (%s", estado2);
        printf(") venceu!");
    }
    printf("\n");

    printf("\n");
    printf("COMPARAÇÃO DE CARTAS (Atributo: Pontos Turísticos):");
    printf("\n");
    printf("Carta 1 - %s", estado1);
    printf(" : %d", pontosturisticos1);
    printf("\n");
    printf("Carta 2 - %s", estado2);
    printf(" : %d", pontosturisticos2);

    printf("\n");
    if (pontosturisticos1>pontosturisticos2) {
        printf("Resultado: Carta 1 (%s", estado1);
        printf(") venceu!");
    }
    else{
        printf("Resultado: Carta 2 (%s", estado2);
        printf(") venceu!");
    }
    printf("\n");

    printf("\n");
    printf("COMPARAÇÃO DE CARTAS (Atributo: Densidade Populacional):");
    printf("\n");
    printf("Carta 1 - %s", estado1);
    printf(" : %.2f", densipopula1);
    printf(" hab/km²");
    printf("\n");
    printf("Carta 2 - %s", estado2);
    printf(" : %.2f", densipopula2);
    printf(" hab/Km²");

    printf("\n");
    if (densipopula1<densipopula2) {
        printf("Resultado: Carta 1 (%s", estado1);
        printf(") venceu!");
    }
    else{
        printf("Resultado: Carta 2 (%s", estado2);
        printf(") venceu!");
    }
    printf("\n");

    printf("\n");
    printf("COMPARAÇÃO DE CARTAS (Atributo: PIB per Capita):");
    printf("\n");
    printf("Carta 1 - %s", estado1);
    printf(" : %.2f", pibpercapita1);
    printf(" reais");
    printf("\n");
    printf("Carta 2 - %s", estado2);
    printf(" : %.2f", pibpercapita2);
    printf(" reais");

    printf("\n");
    if (pibpercapita1>pibpercapita2) {
        printf("Resultado: Carta 1 (%s", estado1);
        printf(") venceu!");
    }
    else{
        printf("Resultado: Carta 2 (%s", estado2);
        printf(") venceu!");
    }
    printf("\n");

    printf("\n");
    printf("COMPARAÇÃO DE CARTAS (Atributo: Super Poder):");
    printf("\n");
    printf("Carta 1 - %s", estado1);
    printf(" : %.2f", superpoder1);
    printf("\n");
    printf("Carta 2 - %s", estado2);
    printf(" : %.2f", superpoder2);

    printf("\n");
    if (superpoder1>superpoder2) {
        printf("Resultado: Carta 1 (%s", estado1);
        printf(") venceu!");
    }
    else{
        printf("Resultado: Carta 2 (%s", estado2);
        printf(") venceu!");
    }
    printf("\n");
    printf("\n");

    */

    int opcao;
    int atributo;
    int voltar;

    void esconderentrada(){
        struct termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt);          // Salva configurações atuais
    newt = oldt;
    newt.c_lflag &= ~(ECHO);                 // Desativa o echo
    tcsetattr(STDIN_FILENO, TCSANOW, &newt); // Aplica mudanças
    }

    printf("\n---- MENU ----\n");
    printf("Escolha uma opção:\n");
    printf("\n");

    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");

    esconderentrada();
    scanf("%d", &opcao);


    switch(opcao)
    {

        case 1: 
        printf("\n");
        printf("Iniciando o jogo...\n");
        printf("\n");

        printf("Escolha o atributo para comparação:\n");
        printf("\n"); 

        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Números de pontos turísticos\n");
        printf("5. Densidade demográfica\n");
        scanf("%d", &atributo);

             if (atributo == 1)
             {  printf("Você escolheu: População\n");
                
                if(populacao1>populacao2)
                {
                    printf("\n");
                    printf("Carta 1 é a vencedora!!\n"); }

                    else {
                        printf("Carta 2 é a vencedora!!\n");
                    }
                }
             
                else if (atributo == 2) {
                    printf("\n");
                    printf("Você escolheu: Área\n");

                    if(area1>area2)
                {
                    printf("Carta 1 é a vencedora!!\n"); }

                    else {
                        printf("Carta 2 é a vencedora!!\n");
                    }
                }
        

                else if (atributo == 3) {
                    printf("\n");
                    printf("Você escolheu: PIB\n");

                    if(pib1>pib2)
                {
                    printf("Carta 1 é a vencedora!!\n");}

                    else {
                        printf("Carta 2 é a vencedora!!\n");
                    }

                }


            
            else if (atributo == 4) {
                printf("\n");
                    printf("Você escolheu: Pontos Turísticos\n");

                    if(pontosturisticos1>pontosturisticos2)
                {
                    printf("Carta 1 é a vencedora!!\n"); }

                    else if (pontosturisticos1<pontosturisticos2) {
                        printf("Carta 2 é a vencedora!!\n");
                    }
                    else {
                        printf("EMPATE");
                    }

        
    }

            else if (atributo == 5) {
                printf("\n");
                    printf("Você escolheu: Densidade Demográfica\n");

                    if(densipopula1<densipopula2)
                {
                    printf("Carta 1 é a vencedora!!\n"); }

                    else if (densipopula1>densipopula2) {
                        printf("Carta 2 é a vencedora!!\n");
                    }
                    else {
                        printf("EMPATE");
                    }
                }
            
        
        else {
            printf("Opção inválida: tente novamente");


        
    }
        while (atributo < 1 || atributo > 5);
        break;

        case 2: {
        printf("\n");
        printf("Regras do Jogo:\n");
        printf("\n"); 

        printf("Regra 1: Você deverá escolher apenas 1(um) ATRIBUTO.\n");
        printf("Regra 2: As CARTAS serão comparadas em relação ao ATRIBUTO escolhido. \n");
        printf("Regra 3: Vence a CARTA com maior valor nos seguintes ATRIBUTOS: População, Área, PIB e Pontos Turísticos. \n");
        printf("Regra 4: Apenas no ATRIBUTO: Densidade Demográfica VENCE a CARTA com menor valor.\n");
        
        printf("\nDigite a tecla '0' para voltar ao menu...");
                getchar(); // captura o '\n' deixado no buffer pelo scanf
                getchar(); // espera o usuário apertar ENTER

                scanf(" %d", &voltar);
                }

                while(voltar !=0);

        break;

        case 3:
        printf("\n");
        printf("Saindo do jogo...\n");
        break;

        default:
                printf("Opção inválida. Tente novamente.\n");
                break;

    }
    while(opcao!=3);
    
    return 0;
    





    



}

