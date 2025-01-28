#include <stdio.h>
// DESAFIO SUPER TRUNFO
int main (){

char Estado [20] = "indefinido";
char Código [20] = "indefinido";
char Cidade [20] = "indefinido";
float população;
float Área;
float Pib;
int PontosTuristicos;
char sim  = 's';


printf(" *****     INTRODUÇÃO     *****\n");
printf("A) - A partir de agora você irá criar a sua carta super trunfo com base em informações de cidades;\n");
printf("B) - Siga as instruções e responda as perguntas obedecendo os comandos;\n");
printf("C) - O sistema ainda não reconhece palavras compostas Ex. São Paulo, São Felix, etc., Sendo assim inclua apenas palavras simples.\n");

printf("PRONTO PRA COMEÇAR? DIGITE s = (sim)\n");
scanf("%c", &sim);

printf("DIGITE O NOME DO ESTADO:\n");
scanf("%s", &Estado);

printf("DIGITE O CÓDIGO DO ESTADO EX.: (AS 02 PRIMEIRAS LETRAS + O NUMERAL SP01, SP02...):\n");
scanf("%s", &Código);

printf("DIGITE O NOME DA CIDADE:\n");
scanf("%s", &Cidade);

printf("DIGITE A POPULAÇÃO SEM PONTO/VÍRGULAS (./,) EX.: (2035640001, 10360335...):\n");
scanf("%f", &população);

printf("DIGITE O TAMANHO DA ÁREA EM KM² EX.: (42.000, 420.000 OBS.: NÃO COLOCAR VÍRGULA (,)):\n");
scanf("%f", &Área);

printf("DIGITE O VALOR DO PIB EX.: (54.970):\n");
scanf("%f", &Pib);

printf("DIGITE A QUANTIDADE DE PONTOS TURÍSTICOS:\n");
scanf("%d", &PontosTuristicos);


printf(" *****  DADOS DA CARTA  *****\n");
printf(" ----------------------------\n");



printf("ESTADO: %s\n", Estado);
printf("CÓDIGO DA CIDADE: %s\n", Código);
printf("CIDADE: %s\n", Cidade);
printf("POPULAÇÃO: %f\n", população);
printf("ÁREA EM KM²: %f\n", Área);
printf("PIB: %f\n", Pib);
printf("Nº PONTO TURÍSTICOS: %d\n", PontosTuristicos);


}