#include <stdio.h>

int main(){

    // Usaremos a letra 't' para a Torre
    // Usaremos a letra 'b' para o Bispo
    // Usaremos a letra 'r' para a Rainha
    int b = 0, r = 0;
    
    //Mover a torre 5 casas para a direita
    for (int t = 0; t < 5; t++)
    {
        printf("Torre - ");
        printf("Direita\n"); //Imprime a direção do movimento
    }

    //Mover o Bispo 5 casas na diagonal para cima e à direita
    do
    {
        printf("Bispo - ");
        printf("Cima, Direita\n");
        b++;
    } while (b < 5);
    

    //Mover a Rainha 8 casas para a esquerda
    while (r < 8)
    {
        printf("Rainha - ");
        printf("Esquerda\n");
        r++;
    }
    

    return 0;
}