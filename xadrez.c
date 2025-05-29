#include <stdio.h>
//médio
int main() {
    //esses ints serão usados para dizer quantas casas a peça tem que mover.
    //são usadas para serem comparadas com os contadores, atingindo o int, o contador para.
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int casas_cavalo = 3; //adicionando o movimento do cavalo
    
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
    }   while(contador_rainha <= casas_rainha);//pior que nem tem espaço no tabuleiro pra mover 8 casas mané
    //não sei bem como isso é uma simulação, tipo, eu só to imprimindo direções e adicionando mais 1 ao cont.
    //eu piloto em simuladores, geralmente eles calculam as coisas e transmitem em FFB até onde eu sei, será que é assim tbm?
    printf("\n===Movimento do Cavalo (3 casas formando um L)===\n");
    int contador_cavalo = 1;
    int contador_cavalo_x = 1; //contador para o movimento horizontal
    int contador_cavalo_y = 1; //contador para o movimento vertical
    for (int i = 0; i <casas_cavalo; i++){//precisando usar um for e um while, as coisas complicam e eu fiz uma gambiarra
        while (contador_cavalo_x <=2)//aqui eu to fazendo o trabalho manual, só permito o cavalo mover 2 casas
        {
            printf("baixo\n");
            contador_cavalo_x++;
        }
        while (contador_cavalo_y <=1)//enquanto aqui ele só move uma casa
        {
            printf("esquerda\n");
            contador_cavalo_y++;//eu tenho certeza que esse sistema vai voltar pra me amaldiçoar, usando um limite
            //hard e não uma variável
        }
    }
    
    return 0;
}
