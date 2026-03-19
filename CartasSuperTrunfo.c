#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área de definição das variáveis para armazenar as propriedades da cidade 1

  char estado[20];
  char codigo[20];
  char cidade[20];
  int populacao;
  float area, densidade;
  float pib, percapita;
  int pontos;

  // Área de definição das variáveis para armazenar as propriedades da cidade 2

  char estado2[20];
  char codigo2[20];
  char cidade2[20];
  int populacao2;
  float area2, densidade2;
  float pib2, percapita2;
  int pontos2;
  
  // Área para entrada de dados carta 1

  printf("Carta n° 1 \n");

  printf("Digite o estado: \n");
  scanf("%s", estado);

  printf("Digite o código: \n");
  scanf("%s", codigo);

  printf("Digite qual a cidade: \n");
  scanf("%s", cidade);

  printf("Qual a população: \n");
  scanf("%d", &populacao);

  printf("Qual a área: \n");
  scanf("%f", &area);

  printf("Qual o pib: \n");
  scanf("%f", &pib);

  printf("Quantos pontos turísticos: \n");
  scanf("%d", &pontos);

  //Calcular a Densidade Populacional carta 1

  densidade = (float) populacao / area;
  percapita = (float) pib / populacao;

  // Área para exibição dos dados da cidade carta 1

  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km\n", area);
  printf("Pib: %.2f Bilhões de reais\n", pib);
  printf("Pontos turísticos: %d\n", pontos);
  printf("Densidade populacional: %.2f Hab/km\n", densidade);
  printf("Pib per capita: %.2f Reais\n", percapita);


  // Área para entrada de dados carta 2

  printf("Carta n° 2 \n");

  printf("Digite o estado: \n");
  scanf("%s", estado2);

  printf("Digite o código: \n");
  scanf("%s", codigo2);

  printf("Digite qual a cidade: \n");
  scanf("%s", cidade2);

  printf("Qual a população: \n");
  scanf("%d", &populacao2);

  printf("Qual a área: \n");
  scanf("%f", &area2);

  printf("Qual o pib: \n");
  scanf("%f", &pib2);

  printf("Quantos pontos turísticosA: \n");
  scanf("%d", &pontos2);

  //Calcular a Densidade Populacional carta 1

  densidade2 = (float) populacao2 / area2;
  percapita2 = (float) pib2 / populacao2;

  // Área para exibição dos dados da cidade carta 2

  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km\n", area2);
  printf("Pib: %.2f Bilhões de reais\n", pib2);
  printf("Pontos turísticos: %d\n", pontos2);
  printf("Densidade populacional: %.2f Hab/km\n", densidade2);
  printf("Pib per capita: %.2f Reais\n", percapita2);


return 0;
} 
