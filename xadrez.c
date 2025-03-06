#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //casas a serem movidas por cada peça
    const int nCasasTB=5, nCasasD = 8;
    //contador de quantas casas cada peça moveu
    int contT=0, contB=0, contD=0;
    //move Torre 5 vezes
    for(contT;contT<nCasasTB;contT++){
        printf("Direita\n");
    }
    printf("\n");
    //move bisbo 5 vezes
    while(contB<nCasasTB){
        printf("Cima Direita\n");
        contB++;
    }
    printf("\n");
    //move dama 8 vezes
    do{
        printf("Esquerda\n");
        contD++;
    }while(contD<nCasasD);

    const int nCasasCEsqueda = 1, nCasasCBaixo=2;
    int contCEsquerda=0,contCBaixo=0;
    printf("\n");
    //move cavalo 2 pra baixo e 1 pra esquerda
    while(contCEsquerda<nCasasCEsqueda){
        for(contCBaixo;contCBaixo<nCasasCBaixo;contCBaixo++){
            printf("Baixo, ");
        }
        printf("Esquerda");
        contCEsquerda++;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
