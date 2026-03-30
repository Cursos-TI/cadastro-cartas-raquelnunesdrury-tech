#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  
    char codigo[4];
    int populacao;
    float area, pib;
    int pontosTuristicos;



  // Área para entrada de dados

    printf("=== Cadastro de Carta ===\n");

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (km²): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);


  // Área para exibição dos dados da cidade

  
    printf("\n=== Dados da Carta ===\n");
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

return 0;
} 
