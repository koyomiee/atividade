#include <stdio.h>

int main() {
    //esses ints serão usados para dizer quantas casas a peça tem que mover.
    //são usadas para serem comparadas com os contadores, atingindo o int, o contador para.
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    
    printf("\n===Movimento da Torre (5 casas para direita)===\n");
    for(int i = 1; i <= casas_torre; i++) {//int com valor um, será incrementado até atingir o número de casas_torre.
        printf("direita\n");//vai imprimir 5 vezes, enquanto o loop é usado, até chegar em 5. não sei pq ele não pula pra baixo
    }
    
    printf("\n===Movimento do Bispo (5 casas diagonal cima-direita)===\n");
    int contador_bispo = 1;//declaração do inicio do contador (é engraçado que vc tenha que iniciar toda vez, não sei pq)
    while(contador_bispo <= casas_bispo) {//enquento o contador bispo for igual ou menor a casas, ele vai imprimir cima direita e adicionar 1 ao contador
        printf("cima, direita\n");
        contador_bispo++;//pq ++ e não só +?
    }
    
    printf("\n===Movimento da Rainha (8 casas para esquerda)===\n");
    int contador_rainha = 1;
    do {
        printf("esquerda\n");
        contador_rainha++;//aqui, ele vai "doar" a impressão de esquerda, e adicionar 1 no int, enquanto o contador for menor que casas.
    } while(contador_rainha <= casas_rainha);//pior que nem tem espaço no tabuleiro pra mover 8 casas mané
    //não sei bem como isso é uma simulação, tipo, eu só to imprimindo direções e adicionando mais 1 ao cont.
    //eu piloto em simuladores, geralmente eles calculam as coisas e transmitem em FFB até onde eu sei, será que é assim tbm?
    return 0;
}
