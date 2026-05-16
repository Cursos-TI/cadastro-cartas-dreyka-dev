#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado; 
char codigo_da_carta [04];
char nome_da_cidade [20];
int populacao; 
float area_em_km2, pib;
int pontos_turisticos;

  // Área para entrada de dados

printf ("Digite o estado: \n");
scanf (" %c", &estado);

printf ("Digite o codigo da carta: \n"); 
scanf ("%s", codigo_da_carta);

printf ("Digite o nome da cidade: \n");
scanf ("%s", nome_da_cidade);

printf ("Informe a populacao: \n");
scanf ("%d", &populacao);

printf ("Informe a area em Km2: \n");
scanf ("%f", &area_em_km2);

printf ("Informe o PIB da cidade: \n");
scanf ("%f", &pib);

printf ("informe a quantidade de pontos turisticos na cidade: \n");
scanf ("%d", &pontos_turisticos);



  // Área para exibição dos dados da cidade
printf ("Olá, jogador! Segue os dados da sua carta\n");
  printf ("estado: %c\n", estado);
  printf ("Codigo da carta: %s\n", codigo_da_carta);
  printf ("Nome da cidade %s\n", nome_da_cidade);
  printf ("Populacao: %i\n", populacao );
  printf ("Area em KM2: %f\n", area_em_km2);
  printf ("pib: %f\n", pib);
  printf ("Pontos turisticos: %i\n", pontos_turisticos);




return 0;
} 
