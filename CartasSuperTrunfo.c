#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área de definição das variáveis para armazenar as propriedades da cidade 1

  char estado[20];
  char codigo[20];
  char cidade[20];
  unsigned long int populacao;
  float area, densidade;
  float pib, percapita;
  int pontos;
  float superPoder;

  // Área de definição das variáveis para armazenar as propriedades da cidade 2

  char estado2[20];
  char codigo2[20];
  char cidade2[20];
  unsigned long int populacao2;
  float area2, densidade2;
  float pib2, percapita2;
  int pontos2;
  float superPoder2;
  
  
  // Área para entrada de dados carta 1

  printf("Carta n° 1 \n");

  printf("Digite o estado: \n");
  scanf("%s", estado);

  printf("Digite o código: \n");
  scanf("%s", codigo);

  printf("Digite qual a cidade: \n");
  scanf("%s", cidade);

  printf("Qual a população: \n");
  scanf("%lu", &populacao);

  printf("Qual a área: \n");
  scanf("%f", &area);

  printf("Qual o pib: \n");
  scanf("%f", &pib);

  printf("Quantos pontos turísticos: \n");
  scanf("%d", &pontos);

  //Calcular a Densidade Populacional carta 1

  densidade = (float) populacao / area;
  percapita = (float) pib / populacao;

  //Calcular Super Poder carta 1

  superPoder = populacao + area + pib + pontos + percapita + (1/densidade);

  // Área para exibição dos dados da cidade carta 1

  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %lu\n", populacao);
  printf("Área: %.2f km\n", area);
  printf("Pib: %.2f Bilhões de reais\n", pib);
  printf("Pontos turísticos: %d\n", pontos);
  printf("Densidade populacional: %.2f Hab/km\n", densidade);
  printf("Pib per capita: %.2f Reais\n", percapita);
  printf("Super Poder carta 1: %.2f Power\n", superPoder);
  


  // Área para entrada de dados carta 2

  printf("Carta n° 2 \n");

  printf("Digite o estado: \n");
  scanf("%s", estado2);

  printf("Digite o código: \n");
  scanf("%s", codigo2);

  printf("Digite qual a cidade: \n");
  scanf("%s", cidade2);

  printf("Qual a população: \n");
  scanf("%lu", &populacao2);

  printf("Qual a área: \n");
  scanf("%f", &area2);

  printf("Qual o pib: \n");
  scanf("%f", &pib2);

  printf("Quantos pontos turísticos: \n");
  scanf("%d", &pontos2);

  //Calcular a Densidade Populacional carta 2

  densidade2 = (float) populacao2 / area2;
  percapita2 = (float) pib2 / populacao2;

  //Calcular Super Poder carta 2

  superPoder2 = populacao2 + area2 + pib2 + pontos2 + percapita2 + (1/densidade2);

  // Área para exibição dos dados da cidade carta 2

  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km\n", area2);
  printf("Pib: %.2f Bilhões de reais\n", pib2);
  printf("Pontos turísticos: %d\n", pontos2);
  printf("Densidade populacional: %.2f Hab/km\n", densidade2);
  printf("Pib per capita: %.2f Reais\n", percapita2);
  printf("Super Poder carta 2: %.2f Power\n", superPoder2);

  // Área para exibição da comparação das cartas

  printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
  printf("Área: Carta 1 venceu (%d)\n", area > area2);
  printf("Pib: Carta 1 venceu (%d)\n", pib > pib2);
  printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos > pontos2);
  printf("Densidade: Carta 1 venceu (%d)\n", densidade < densidade2);
  printf("Pib per capita: Carta 1 venceu (%d)\n", percapita > percapita2);
  printf("Super Poder: Carta 1 venceu (%d)\n", superPoder > superPoder2);


return 0;
} 
