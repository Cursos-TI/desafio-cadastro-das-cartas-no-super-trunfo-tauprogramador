#include <stdio.h>

//desafio Super Trunfo em C nível Novato
//Aluno: Tauã Uchôa

int main() {
    

    //Jogador 01 definições
    char estado[20];
    char codigo[4];
    char cidade[100];
    int populacao;
    float area_km2;
    float pib;
    int npt;
    
    //Jogador 01, insira os dados da carta
    printf("Jogador 01\nInsira os dados da carta:\n");

    //leitura dos dados do usuario 
    printf("Estado: ");
    scanf(" %[^\n]", estado);
    
    printf("Código da carta: ");
    scanf("%s", codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade);

    printf("População: ");
    scanf("%d", &populacao);
    
    printf("Área: ");
    scanf("%f", &area_km2);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Nº de pontos turísticos: ");
    scanf("%d", &npt);


    //impressão dos dados do jogador 01
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area_km2);
    printf("PIB: %f\n", pib);
    printf("Pontos turísticos: %d\n", npt);
    
    printf("\n");

    // Jogador 02 definições
    
    char estado2[20];
    char codigo2[4];
    char cidade2[100];
    int populacao2;
    float area_km22;
    float pib2;
    int npt2;
    
    //Jogador 02, insira os dados da carta
    printf("Jogador 02\nInsira os dados da carta:\n");

    //leitura dos dados do usuario 
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    
    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área: ");
    scanf("%f", &area_km22);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Nº de pontos turísticos: ");
    scanf("%d", &npt2);


    //impressão dos dados do Jogador 2
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area_km22);
    printf("PIB: %f\n", pib2);
    printf("Pontos turísticos: %d\n", npt2);
   
    return 0;
}
