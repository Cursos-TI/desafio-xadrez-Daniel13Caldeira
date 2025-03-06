#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moveTorre(int nCasas){
    if(0 == nCasas){ //para a execução quando não tiver mais casas para andar
        return;
    }
    printf("Direita\n");
    moveTorre(nCasas-1);//reduz o número de casas que falta para andar
}

void moveBispoRec(int nCasas){
    if(0 == nCasas){//para a execução quando não tiver mais casas para andar
        return;
    }
    printf("Cima Direita\n");
    moveBispoRec(nCasas-1);//reduz o número de casas que falta para andar
}

void moveBispo(int nCasasCima,int nCasasDireita){
    for(nCasasCima;nCasasCima>0;nCasasCima--){
            printf("Cima ");
        for(nCasasDireita;nCasasDireita==nCasasCima;nCasasDireita--){
            printf("Direita\n");
        }
    }
}

void moveDama(int nCasas){
    if(0 == nCasas){//para a execução quando não tiver mais casas para andar
        return;
    }
    printf("Esquerda\n");
    moveDama(nCasas-1);//reduz o número de casas que falta para andar
}

void moveCavalo(int nCasasCEsqueda,int nCasasCBaixo){
    for(nCasasCBaixo,nCasasCEsqueda;nCasasCBaixo>=0 && nCasasCEsqueda>=0;nCasasCBaixo--,nCasasCEsqueda--){
        if(nCasasCBaixo>0){
            printf("Baixo, ");
            nCasasCEsqueda++;
            continue;
        }
        if(nCasasCEsqueda>0){
            printf("Esquerda");
            break;
        }
    }
}

int main() {
    //casas a serem movidas por cada peça
    const int nCasasT=5, nCasasB = 5, nCasasD = 8, nCasasCEsqueda = 1, nCasasCBaixo=2;
    //move Torre 5 vezes
    moveTorre(nCasasT);
    printf("\n");

    //move bisbo 5 vezes
    moveBispoRec(nCasasB);
    printf("\n");

    moveBispo(nCasasB,nCasasB);
    printf("\n");

    //move dama 8 vezes
    moveDama(nCasasD);
    printf("\n");
    //move cavalo 2 pra baixo e 1 pra esquerda
    moveCavalo(nCasasCEsqueda,nCasasCBaixo);
    return 0;
}
