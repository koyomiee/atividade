#include <stdio.h>
// medio

int main() {
    int tabuleiro[10][10] = {0}; 

    int navio_1[3] = {3, 3, 3};
    int navio_2[3] = {3, 3, 3};
    int navio_3[3] = {3, 3, 3}; //navio diagonal
    int navio_4[3] = {3, 3, 3}; //navio diagonal

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
            printf("%d ", tabuleiro[i][j]); //imprimindo o tabulero inteiro, ele vai imprimir 0 para espaços vazios e 3 para os navios
        }
        printf("\n");//antes de tudo, é determinado que os navios ocupem as posições deles, assim, o resto é impresso 0
    }
    return 0;
}
