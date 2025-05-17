#include <stdio.h>

int main(){

    // Usaremos a letra 't' para a Torre
    // Usaremos a letra 'b' para o Bispo
    // Usaremos a letra 'r' para a Rainha
    // Usaremos a letra 'c' para o Cavalo

    int b = 0, r = 0;
    
    //Mover a torre 5 casas para a direita
    for (int t = 0; t < 5; t++)
    {
        printf("Torre - ");
        printf("Direita\n"); //Imprime a direção do movimento        
    }
    printf("\n");

    //Mover o Bispo 5 casas na diagonal para cima e à direita
    do
    {
        printf("Bispo - ");
        printf("Cima, Direita\n");
        b++;
    } while (b < 5);
    printf("\n");

    //Mover a Rainha 8 casas para a esquerda
    while (r < 8)
    {
        printf("Rainha - ");
        printf("Esquerda\n");
        r++; 
    }
        printf("\n");
    
    for (int c = 0; c < 1; c++)
    {
        while (c < 2)
        {
            printf("Cavalo ");
            printf("Cima\n");
            c++;
        }
        printf("Cavalo ");
        printf("Direita\n");
        printf("\n");
    }

    return 0;
}