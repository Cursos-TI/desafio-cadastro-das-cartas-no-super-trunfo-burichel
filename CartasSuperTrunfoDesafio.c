#include <stdio.h>
// DESAFIO SUPER TRUNFO.

int main (){

// CADASTRO DAS VARÍAVEIS.
char Estado [99] = "indefinido";
char Estado2 [99] = "indefinido";
char Código [99] = "indefinido";
char Código2 [99] = "indefinido";
char Cidade  [99] = "indefinido";
char Cidade2 [99] = "indefinido";
float população, população2;
float Área, Área2;
float Pib, Pib2;
int PontosTuristicos, PontosTuristicos2;
float densidade_populacional, densidade_populacional2;
float pib_per_capta, pib_per_capta2;
char sim = 's';

// APRESENTAÇÃO INTRUDUTIVA COM INSTRUÇÕES DE USO.
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

printf("DIGITE O NOME DO ESTADO 2:\n");
scanf("%s", &Estado2);

printf("DIGITE O CÓDIGO DO ESTADO 2 EX.: (AS 02 PRIMEIRAS LETRAS + O NUMERAL SP01, SP02...):\n");
scanf("%s", &Código2);

printf("DIGITE O NOME DA CIDADE :\n");
scanf("%s", &Cidade2);

printf("DIGITE A POPULAÇÃO EX.: (20.553, 100.335 ...):\n");
scanf("%f", &população2);

printf("DIGITE O TAMANHO DA ÁREA EM KM² EX.: (42.000, 420.000 OBS.: NÃO COLOCAR VÍRGULA (,)):\n");
scanf("%f", &Área2);

printf("DIGITE O VALOR DO PIB EX.: (54.970):\n");
scanf("%f", &Pib2);

printf("DIGITE A QUANTIDADE DE PONTOS TURÍSTICOS:\n");
scanf("%d", &PontosTuristicos2);

densidade_populacional = população / Área;
densidade_populacional2 = população2 / Área2;
pib_per_capta = Pib / população;
pib_per_capta2 = Pib2 / população2;

//IMPRIME O CABEÇALHO - DADOS DA CARTA -.
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
printf("DENSIDADE POPULACIONAL: %f\n", densidade_populacional);
printf("PIB PER CAPTA: %f\n", pib_per_capta);

printf(" *****  DADOS DA CARTA 2 *****\n");

printf("ESTADO: %s\n", Estado2);
printf("CÓDIGO DA CIDADE: %s\n", Código2);
printf("CIDADE: %s\n", Cidade2);
printf("POPULAÇÃO: %f\n", população2);
printf("ÁREA EM KM²: %f\n", Área2);
printf("PIB: %f\n", Pib2);
printf("Nº PONTO TURÍSTICOS: %d\n", PontosTuristicos2);
printf("DENSIDADE POPULACIONAL: %f\n", densidade_populacional2);
printf("PIB PER CAPTA: %f\n", pib_per_capta2);

printf("COMPARAÇÃO DAS CARTAS (ATRIBUTO - POPULAÇÃO):\n");


if (população > população2) {
    printf("VENCEDOR:%s / %s / %s: \n", Estado, Código, Cidade);
}   else {   
    printf("VENCEDOR: %s / %s / %s: \n", Estado2, Código2, Cidade2);
}

return 0;

}