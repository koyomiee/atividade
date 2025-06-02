#include <stdio.h>
//avançado
//declarações recursivas, entre parenteses, eu declaro uma função que recebe um inteiro, indicando que são o número de casas restantes para mover.
int movimento_torre(int casas_restantes);//atribuindo a int de casas restantes, que será chamada depois em cada caso
int movimento_bispo(int casas_restantes);//é como avisar "ei, aqui vai ter um inteiro com valor predeterminado, eu não sei qual, mas vai ter!"
int movimento_rainha(int casas_restantes);
int movimento_cavalo(int casas_restantes);

int main() {
    //eu declaro e dou valores a esses inteiros, com o numero determinado de casas. essas casas serão chamadas posteriormente
    //por "casas_restantes"
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int casas_cavalo = 3;

    //aqui eu as chamo, atribuindo cada função a sua variavel com o numero de casas restantes
    movimento_torre(casas_torre);
    movimento_bispo(casas_bispo);
    movimento_rainha(casas_rainha);
    movimento_cavalo(casas_cavalo);

    return 0;
}

// Implementações das funções
int movimento_torre(int casas_restantes) {
    printf("\n===Movimento da Torre (5 casas a direita)===\n");
    for(int i = 0; i < casas_restantes; i++) {//caso simples de for, incrementa i até atingir casas_restantes, imprimindo "direita"
        printf("direita\n");
    }
    return casas_restantes; //retorna número de movimentos
}

int movimento_bispo(int casas_restantes) {
    printf("\n===Movimento do Bispo (5 casas diagonal cima-direita)===\n");
    int contador = 0;
    int contador_y = 0;
    int contador_x = 0;
    do
    {//a atividade pede que o controle horizontal e vertical sejam separados, então fiz dois contadores, que adiocionam a si, a um contador geral e imprimem a direção
        printf ("cima\n");
        contador_y++;//fiz isso usando "do"
        contador++;
        printf ("direita\n");
        contador_x++;
        contador++;
    } while (contador_y < casas_restantes && contador_x < casas_restantes);
    
    return contador; //retorna número de movimentos
}

int movimento_rainha(int casas_restantes) {
    printf("\n===Movimento da Rainha (8 casas a esquerda)===\n");
    int contador = 0;
    do {//comentario comentario comentario
        printf("esquerda\n");
        contador++;//loop simples pra imprimir "esquerda", enquanto o contador for menor que casas_restantes
    } while(contador < casas_restantes);
    return contador; //retorna número de movimentos
}

int movimento_cavalo(int casas_restantes) {
    printf("\n===Movimento do Cavalo (3 casas formando um L)===\n");
    int movimentos = 0;
    switch (movimentos < casas_restantes)
    {//SWITCH!!!!
    case 1:
        printf("cima\n");
        movimentos++;//uma casa pra cima
        printf("cima\n");
        movimentos++; //outra casaa para cima
        printf("direita\n");
        movimentos++; //uma casa para direita
        break;
    default:
        break;
    }
    return movimentos; //retorna número de movimentos
}
