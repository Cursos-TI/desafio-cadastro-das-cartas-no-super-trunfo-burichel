#include <stdio.h>
// DESAFIO SUPER TRUNFO.

int main() {

// CADASTRO DAS VARIÁVEIS.
    char estado [] = "estado";
    char codigo [] = "codigo";
    char cidade [] = "cidade";
    float populacao;
    float area;
    float pib;
    int PontosTuristicos;
    char sim = 's';

// APRESENTAÇÃO DO PROGRAMA COM INSTRUÇÕES DE USO.
    printf("*****     INTRODUÇÃO     *****\n");
    printf("A) - Neste programa você irá criar a sua carta SUPER TRUNFO com base nas  informações de cidades.\n;");
    printf("B) - Siga as instruções e responda as perguntas obedecendo os comandos.;\n");
    printf("C) - ATENÇÃO, o programa ainda não reconhece palavras compostas ex. São Paulo, Rio de Janeiro, etc. Inclua apenas palavras simples.\n");

// PERGUNTA DE INTERAÇÃO.
    printf("VAMOS COMEÇAR? DIGITE s PARA  = (SIM)\n");
    scanf("%c", &sim);

// ATRIBUIÇÃO DO NOME DO ESTADO.
    printf("DIGITE O NOME DO ESTADO:\n");
    scanf("%s", &estado);

// ATRIBUIÇÃO DO CÓDIGO.
    printf("DIGITE O CÓDIGO DO ESTADO EX,: (AS 2 PRIMEIRAS LETRAS DO ESTADO + NUMERAL = SP01, SP 02, RJ01, RJ02...):\n");
    scanf("%s", &codigo);

// ATRIBUIÇAO DO NOME DA CIDADE.
    printf("DIGITE O NOME DA CIDADE:\n");
    scanf("%s", &cidade);
    
// ATRIBUIÇÃO DA POPULAÇÃO.    
    printf("DIGITE A POPULAÇÃO SEM PONTO (.) E SEM VÍRGULA (,) EX.: (2000 / 20000 / 200000 ...):\n");
    scanf("%f", &populacao);

// ATRIBUIÇÃO DO TAMANHO DA ÁREA TERRITORIAL.
    printf("DIGITE O TAMANHO DA ÁREA EM KM² EX.: (42.000 / 555.000 OBS.: NÃO COLOCAR VÍRGULA (,)):\n");
    scanf("%f", &area);

// ATRIBUIÇÃO DO PIB.
    printf("DIGITE O VALOR DO PIB EX.: (123.456 / 56.789):\n");
    scanf("%f", &pib);

// ATRIBUIÇÃO DO NÚMERO DE PONTOS TURÍSTICOS
    printf("DIGITE O NÚMERO DE PONTOS TURÍSTICOS:\n");
    scanf("%d", &PontosTuristicos);

// IMPRIME O CABEÇALHO - DADOS DA CARTA -.
    printf("*****     DADOS DA CARTA     *****\n");
    printf("----------------------------------\n");

// APRESENTA OS DADOS DA CARTA CADASTRADA.
    printf("ESTADO: %s\n", estado);
    printf("CÓDIGO: %s\n", codigo);
    printf("CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %f\n", populacao);
    printf("ÁREA EM KM²: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Nº DE PONTOS TURÍSTICOS: %d", PontosTuristicos);
// DESAFIO FINALIZADO

return 0;


}