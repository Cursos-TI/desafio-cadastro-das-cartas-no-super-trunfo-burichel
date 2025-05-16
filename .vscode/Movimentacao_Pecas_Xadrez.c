#include <stdio.h>

int main () {

    int numero;
    // MOVER A TORRE 5 CASAS A FRENTE
    printf("digite 1 para mover a torre 5 casas para a frente... \n");
    scanf("%d", &numero);

    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }
    // MOVER O BISPO 5 CASAS NA DIAGONAL
    printf("digite 1 para mover o bispo 5 casas na diagonal a direita... \n");
    scanf("%d", &numero);

    while (numero <= 10)
    {   
        if (numero % 2 == 1)
        {
            printf("Cima\n");
        }else {
            printf("Direita\n");
        }
            
        numero++;
    }
        // MOVER A RAINHA 8  CASAS A ESQUERDA
        printf("digite 1 para mover a Rainha 8  casas para a esquerda... \n");
        scanf("%d", &numero);

    do
    {
        printf("esquerda\n");
        numero++;

    } while (numero <= 8);
    

    return 0;
}