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
float densidade_populacional;
float pib_per_capita;
float super_poder_carta_1;

// Variaveis da carta 2 

char estado2;
char codigo_da_carta2 [04];
char nome_da_cidade2 [20];
int populacao2; 
float area_em_km2_carta2, pib2;
int pontos_turisticos_carta2;
float densidade_populacional_carta2;
float pib_per_capita_carta2;
float super_poder_carta_2;


  // Área para entrada de dados carta 1

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

// Área para entrada de dados carta 2
printf ("Agora vamos inserir os dados da segunda carta: \n");
printf ("Digite o estado: \n");
scanf (" %c", &estado2);

printf ("Digite o codigo da carta: \n"); 
scanf ("%s", codigo_da_carta2);

printf ("Digite o nome da cidade: \n");
scanf ("%s", nome_da_cidade2);

printf ("Informe a populacao: \n");
scanf ("%d", &populacao2);

printf ("Informe a area em Km2: \n");
scanf ("%f", &area_em_km2_carta2);

printf ("Informe o PIB da cidade: \n");
scanf ("%f", &pib2);

printf ("informe a quantidade de pontos turisticos na cidade: \n");
scanf ("%d", &pontos_turisticos_carta2);



  // Área para exibição dos dados da cidade da carta 1
printf ("Olá, jogador! Segue os dados da sua carta\n");
  printf ("estado: %c\n", estado);
  printf ("Codigo da carta: %s\n", codigo_da_carta);
  printf ("Nome da cidade %s\n", nome_da_cidade);
  printf ("Populacao: %i\n", populacao );
  printf ("Area em KM2: %f\n", area_em_km2);
  printf ("pib: %f\n", pib);
  printf ("Pontos turisticos: %i\n", pontos_turisticos);

densidade_populacional= populacao / area_em_km2;
printf ("Densidade: %.2f\n", densidade_populacional);

pib_per_capita = pib / populacao;
printf ("Pib per capita: %.2f\n", pib_per_capita);

super_poder_carta_1 = (float) (populacao + area_em_km2 + pib + pontos_turisticos + pib_per_capita
+ (1.0 / densidade_populacional));




//(população, área, PIB, número de pontos turísticos, PIB per capita e 
//o _inverso_ da densidade populacional – quanto menor a densidade, maior o "poder"). 


  // Área para exibição dos dados da cidade da carta 2

printf ("Olá, jogador! Segue os dados da sua carta numero 2\n");
  printf ("estado: %c\n", estado2);
  printf ("Codigo da carta: %s\n", codigo_da_carta2);
  printf ("Nome da cidade %s\n", nome_da_cidade2);
  printf ("Populacao: %i\n", populacao2 );
  printf ("Area em KM2: %f\n", area_em_km2_carta2);
  printf ("pib: %f\n", pib2);
  printf ("Pontos turisticos: %i\n", pontos_turisticos_carta2);

densidade_populacional_carta2= populacao2 / area_em_km2_carta2;
printf ("Densidade: %.2f\n", densidade_populacional_carta2);

pib_per_capita_carta2 = pib2 / populacao2;
printf ("Pib per capita: %.2f\n", pib_per_capita_carta2);

super_poder_carta_2 = (float) (populacao2 + area_em_km2_carta2 + pib2 + pontos_turisticos_carta2 + pib_per_capita_carta2
+ (1.0 / densidade_populacional_carta2));

return 0;
} 
