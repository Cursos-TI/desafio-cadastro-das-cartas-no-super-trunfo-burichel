#include <stdio.h>
// DESAFIO SUPER TRUNFO.

int main (){

// CADASTRO DAS VARÍAVEIS.
char Estado [20] = "indefinido"; 
char Código [20] = "indefinido";
char Cidade [20] = "indefinido";
float população;
float Área;
float Pib;
int PontosTuristicos;
char sim  = 's';

// APRESENTAÇÃO DAS INSTRUÇÕES DE USO.
printf(" *****     INTRODUÇÃO     *****\n");
printf("A) - A partir de agora você irá criar a sua carta super trunfo com base em informações de cidades;\n");
printf("B) - Siga as instruções e responda as perguntas obedecendo os comandos;\n");
printf("C) - O sistema ainda não reconhece palavras compostas Ex. São Paulo, São Felix, etc., Sendo assim inclua apenas palavras simples.\n");

// PERGUNTA DE CONFIRMAÇÃO DE USO.
printf("PRONTO PRA COMEÇAR? DIGITE s = (sim)\n");
scanf("%c", &sim);

// ATRIBUIÇAO DO NOME DO ESTADO.
printf("DIGITE O NOME DO ESTADO:\n");
scanf("%s", &Estado);

// ATRIBUIÇAO DO CÓDIGO.
printf("DIGITE O CÓDIGO DO ESTADO EX.: (AS 02 PRIMEIRAS LETRAS + O NUMERAL SP01, SP02...):\n");
scanf("%s", &Código);

// ATRIBUIÇAO DO NOME DA CIDADE.
printf("DIGITE O NOME DA CIDADE:\n");
scanf("%s", &Cidade);

// ATRIBUIÇAO DA POPULAÇÃO.
printf("DIGITE A POPULAÇÃO SEM PONTO/VÍRGULAS (./,) EX.: (2035640001, 10360335...):\n");
scanf("%f", &população);

// ATRIBUIÇAO TO TAMANHO DA ÁREA TERRITORIAL. 
printf("DIGITE O TAMANHO DA ÁREA EM KM² EX.: (42.000, 420.000 OBS.: NÃO COLOCAR VÍRGULA (,)):\n");
scanf("%f", &Área);

// ATRIBUIÇAO DO VALOR DO PIB.
printf("DIGITE O VALOR DO PIB EX.: (54.970):\n");
scanf("%f", &Pib);

// ATRIBUIÇAO DA QUANTIDADE DE PONTOS TURÍSTICOS.
printf("DIGITE A QUANTIDADE DE PONTOS TURÍSTICOS:\n");
scanf("%d", &PontosTuristicos);

//IMPRIME O CABEÇALHO: DADOS DA CARTA.
printf(" *****  DADOS DA CARTA  *****\n");
printf(" ----------------------------\n");



// APRESENTA OS DADOS DA CARTA CADASTRADA.
printf("ESTADO: %s\n", Estado);
printf("CÓDIGO DA CIDADE: %s\n", Código);
printf("CIDADE: %s\n", Cidade);
printf("POPULAÇÃO: %f\n", população);
printf("ÁREA EM KM²: %f\n", Área);
printf("PIB: %f\n", Pib);
printf("Nº PONTO TURÍSTICOS: %d\n", PontosTuristicos);

return 0;

}