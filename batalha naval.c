#include <stdio.h>
// avançado

int main() {
    int tabuleiro[10][10] = {0}; 

    int navio_1[3] = {3, 3, 3};
    int navio_2[3] = {3, 3, 3};
    int navio_3[3] = {3, 3, 3}; //navio diagonal
    int navio_4[3] = {3, 3, 3}; //navio diagonal
    //habilidades
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

     int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
    //habilidades

    int aplicar_habilidade(int origem_x, int origem_y, int habilidade[5][5]) {
        int inicio_x = origem_x - 5/2; //calcula o ponto de origem para aplicar a habilidade
        int inicio_y = origem_y - 5/2; //pq 5/2 e não colocar 2.5 direto? deve dar bom nn
        //aplicação da habilidade
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {//jota vale zero, e será adicionado 1 até que chege a 5
                int pos_x = inicio_x + i;//calcula a posição x e y
                int pos_y = inicio_y + j;//posições essas representadas pelo inicio (da onde vem a habilidade) + i e j (número de passos do loop for)
                if(pos_x >= 0 && pos_x < 10 && pos_y >= 0 && pos_y < 10) { //verifica se a posição está dentro dos limites do tabuleiro
                    if(habilidade[i][j] == 1) { //caso a habilidade seja aplicada
                        tabuleiro[pos_x][pos_y] = 5; //marca a posição como atingida
                    }
                }
            }
        }
    }

    //*EXPLOSÃO*
    aplicar_habilidade(2, 2, cone); //aplica a habilidade cone na posição 2x2
    aplicar_habilidade(5, 5, cruz); //aplica a habilidade cruz na posição 5x5
    aplicar_habilidade(8, 8, octaedro); //aplica a habilidade octaedro na posição 8x8
    //*EXPLOSÃO*

    //navio 1 (horizontal)
    for (int i = 0; i < 3; i++){//adicionarei mais 1 a i até que seja 3 uuuUuuUUU
        tabuleiro[0][2 + i] = navio_1[i]; //inicializando e posicionando navios horizontais na linha 3 + o que ela precisa
    }

    //navio 2 (vertical)
    for (int i = 0; i < 3; i++) {
        tabuleiro[6 + i][0] = navio_2[i]; //inicializando e botando navios verticais na coluna 7 + o que ela precisa
    }//(os 3 são 3 navios ou um navio de 3 casas?)
    
    //matrizes horizontais são [x][y+i], onde x é a linha e y é a coluna
    //matrizes verticais são [x+i][y]?

    //navio 3 (diagonal)
    for (int i = 0; i < 3; i++){
        tabuleiro[7 - i][7 + i] = navio_3[i];
    }
    //navio 4 (diagonal)
     for (int i = 0; i < 3; i++){
        tabuleiro[2 + i][5 - i] = navio_4[i];
    }
    
    printf("\n===Tabuleiro de Batalha Naval===\n");
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i); //imprimindo números de 0 a 9 no topo do tabuleiro, com espaço pra nao embolar
    }
    printf("\n");
    
    for(int i = 0; i < 10; i++){//logica, assim como acima, que diz para i ir até 10, imprimir i e depois usar a mesma logica com j
        printf("%d| ", i);//imprimindo o array, matriz, sei la de I e J 
        for(int j = 0; j < 10; j++){
            switch (tabuleiro[i][j]) {
            case 0: 
                printf("0 "); //awa
                break;
            case 3:
                printf("3 "); //metal na awa
                break;
            case 5:
                printf("5 "); //explosão
                break;
            default:
                printf("%d ", tabuleiro[i][j]); //caso não seja 0, 3 ou 5
            }
        }
        printf("\n");
    }
    return 0;
}
