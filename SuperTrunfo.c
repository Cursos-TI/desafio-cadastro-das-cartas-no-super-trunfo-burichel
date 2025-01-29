#include <stdio.h>

int main() {

    char nome [] = "nome";
    int idade;

    printf("digite seu nome:\n");
    scanf("%s", &nome);

    printf("digite sua idade\n");
    scanf("%d", &idade);

    
    printf("resumo:\n");

    printf("nome = %s\n", nome);
    printf("idade = %d\n", idade);

return 0;


}