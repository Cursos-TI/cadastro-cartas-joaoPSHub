#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades 1

  char estado[50];
  char codigo[10];
  char cidade[50];
  int populacao;
  float area;
  float pib;
  int pontos;

  // Área para definição das variáveis para armazenar as propriedades das cidades 2

  char estado2[50];
  char codigo2[10];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
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

  printf("Qual a pontuação: \n");
  scanf("%d", &pontos);

  // Área para exibição dos dados da cidade carta 1

  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %f\n", area);
  printf("Pib: %f\n", pib);
  printf("Pontuação: %d\n", pontos);


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

  printf("Qual a pontuação: \n");
  scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade carta 2

  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %f\n", area2);
  printf("Pib: %f\n", pib2);
  printf("Pontuação: %d\n", pontos2);


return 0;
} 
