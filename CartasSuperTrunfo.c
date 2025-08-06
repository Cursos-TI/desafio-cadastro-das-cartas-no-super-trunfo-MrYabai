#include <stdio.h>
#include <string.h>

int main() {
    char estado[10], CartaDaCarta[10], cidade[50];
    char estado2[10], CartaDaCarta2[10], cidade2[50];

    int populacao, pontosTuristicos;
    int populacao2, pontosTuristicos2;

    float area, PIB;
    float area2, PIB2;

    char buffer[100];  // buffer para leitura de linha completa

    // ---- CARTA 1 ----
    printf("Digite a letra do estado da carta 1: \n");
    scanf("%s", estado);
    
    printf("Digite o Codigo da carta 1: \n");
    scanf("%s", CartaDaCarta);
    getchar(); // consome o \n deixado pelo scanf

    printf("Digite o nome da cidade da carta 1: \n");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Digite a população da carta 1: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &populacao);

    printf("Digite a area (em km²) da carta 1: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area);

    printf("Digite o PIB da carta 1: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &PIB);

    printf("Digite o numero de pontos turisticos da carta 1: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontosTuristicos);

    // ---- CARTA 2 ----
    printf("Digite a letra do estado da carta 2: \n");
    scanf("%s", estado2);
    
    printf("Digite o Codigo da carta 2: \n");
    scanf("%s", CartaDaCarta2);
    getchar(); // consome \n

    printf("Digite o nome da cidade da carta 2: \n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a população da carta 2: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &populacao2);

    printf("Digite a area (em km²) da carta 2: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area2);

    printf("Digite o PIB da carta 2: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &PIB2);

    printf("Digite o numero de pontos turisticos da carta 2: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontosTuristicos2);

    // ---- SAÍDA ----
    printf("\nCARTA 1:\n Estado: %s\n Codigo: A%s\n Cidade: %s\n Populacao: %d\n Area: %.2f\n PIB: %.2f\n Pontos Turisticos: %d\n",
           estado, CartaDaCarta, cidade, populacao, area, PIB, pontosTuristicos);

    printf("\nCARTA 2:\n Estado: %s\n Codigo: B%s\n Cidade: %s\n Populacao: %d\n Area: %.2fKm?\n PIB: %.2f\n Pontos Turisticos: %d\n",
           estado2, CartaDaCarta2, cidade2, populacao2, area2, PIB2, pontosTuristicos2);

    return 0;
}

/*

tive de usar o fgets pois percebi que o scanf nao estava pegando o nome da cidade corretamente e estava pulando linah e chamados posteriores 
ex:
Digite a area (em km²) da carta 1: 
1521.11Km²
Digite o PIB da carta 1: 
Digite o numero de pontos turisticos da carta 1:
Digite a letra do estado da carta 2:
Digite o Codigo da carta 2:

percebi que de alguma forma o scanf estava pulando a linha de acordo com o . aqui foi pulado 4 linha sendo ela correspondente a 1 1 K m²
entao tive de usar o fgets para pegar a string corretamente e assim poder continuar o programa 


Não entendo nada do meu codigo so sei que precisou disso tudo pra parar de pular a bosta da linha 

vou deixar o codigo anterior abaixo para referencia

////

#include <stdio.h>

int main() {

    char estado[10], CartaDaCarta[10], cidade[10];
    char estado2[10], CartaDaCarta2[10], cidade2[10];
    
    int população, pontosTuristicos;
    int população2, pontosTuristicos2;

    float area, PIB;
    float area2, PIB2;
    // carta 1

    printf("Digite a letra do estado da carta 1: \n");
    scanf("%s", estado);

    printf("Digite o Codigo da carta 1: \n");
    scanf("%s", CartaDaCarta);

    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", cidade);    

    printf("Digite a população da carta 1: \n");
    scanf("%d", &população);

    printf("Digite a area (em km²) da carta 1: \n");
    scanf("%f", &area); 

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &PIB);  

    printf("Digite o numero de pontos turisticos da carta 1: \n");
    scanf("%d", &pontosTuristicos); 

    
    
    // carta 2 
    
    printf("Digite a letra do estado da carta 2: \n");
    scanf("%s", estado2);
    
    printf("Digite o Codigo da carta 2: \n");
    scanf("%s", CartaDaCarta2);
    
    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s", cidade2);    
    
    printf("Digite a população da carta 2: \n");
    scanf("%d", &população2);
    
    printf("Digite a area (em km²) da carta 2: \n");
    scanf("%f", &area2); 
    
    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &PIB2);  
    
    printf("Digite o numero de pontos turisticos da carta 2: \n");
    scanf("%d", &pontosTuristicos); 
    
    printf("carta 1: \n Estado: %s \n Codigo %s \n Nome da Cidade: %s \n População: %d \n Area: %f \n PIB: %.5f \n Pontos Turisticos: %d \n", estado, CartaDaCarta, 
    cidade, população, area, PIB, pontosTuristicos);




    printf("\ncarta 1: \n Estado: %s \n Codigo %s \n Nome da Cidade: %s \n População: %d \n Area: %f \n PIB: %.5f \n Pontos Turisticos: %d \n", estado, CartaDaCarta, cidade, população, area, PIB, pontosTuristicos);
    
}
*/
