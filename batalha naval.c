#include <stdio.h>
// iniciante

int main() {
    int tabuleiro[10][10] = {0}; 

    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};

    for (int i = 0; i < 3; i++){//adicionarei mais 1 a i até que seja 3 uuuUuuUUU
        tabuleiro[1][4 + i] = navio_horizontal[i]; //inicializando e posicionando navios horizontais na linha 3 + o que ela precisa
    }
    for (int i = 0; i < 3; i++) {
        tabuleiro[6 + i][4] = navio_vertical[i]; //inicializando e botando navios verticais na coluna 7 + o que ela precisa
    }//(os 3 são 3 navios ou um navio de 3 casas?)
    
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
        printf("\n");
    }
    return 0;
}
