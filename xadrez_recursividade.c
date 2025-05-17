#include <stdio.h>

//RECURSIVIDADE PARA A TORRE
void movertorre(int casas){
    if(casas > 0){
        printf("Torre - Direita\n");
        movertorre(casas - 1);
    }
}

//RECURSIVIDADE PARA O BISPO
void moverbispo(int casas){
    if(casas > 0){
        printf("Bispo - Cima, Direita\n");
        moverbispo(casas - 1);
    }
}

//RECURSIVIDADE PARA A RAINHA
void moverrainha(int casas){
    if(casas > 0){
        printf("Rainha - Esquerda\n");
        moverrainha(casas - 1);
    }
}

//RECURSIVIDADE PARA O CAVALO
void movercavalo(int casas){
    if(casas > 0){
        printf("Cavalo - Cima\n");
        movercavalo(casas - 1);
    }        
}

int main(){

    //Mover a torre 5 casas para a direita
    movertorre(5);
    printf("\n");

    //Mover o Bispo 5 casas na diagonal para cima e à direita
    moverbispo(5);
    printf("\n");

    //Mover a Rainha 8 casas para a esquerda
    moverrainha(8);
    printf("\n");
    
    //Mover o Cavalo 2 vezes para cima e 1 direita
    movercavalo(2);
    printf("Cavalo - Direita\n");
    printf("\n");

    return 0;
}