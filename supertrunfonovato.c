#include <stdio.h>

int main() {
        printf("bem vindo ao super trunfo!\n");
    
    char nomestado[1];
        printf("primeiro, insira o nome do estado, sendo uma letra maíuscula de 'A' a 'H', ok?\n");
        scanf("%s", nomestado);
        printf("a letra de estado escolhida foi: %s\n", nomestado);
    // primeiro, solicitamos o nome do estado, que deve ser uma letra de 'A' a 'H', e armazenamos na variável nomestado.
    // depois, imprimimos o estado escolhido na tela.
    char codcarta[3];
            printf("ótimo! agora insira o código da carta. sendo ela a letra do estado + um numero de 01 a 04\n");
            scanf("%s", codcarta);
            printf("o código da carta escolhida foi: %s\n", codcarta);
    // em seguida, pedimos o código da carta, que deve ser a letra do estado + um número de 01 a 04, e armazenamos na variável codcarta.
    // depois, imprimimos o código da carta escolhida na tela.
    // (eu queria ter uma forma de sanitizar a entrada, adicionando a variável 'nomestado' na variável 'codcarta', mas não sei como fazer isso ainda, então vou deixar assim por enquanto);
    char nomecidade[20];
            printf("agora insira o nome da cidade\n");
            scanf("%s", nomecidade);
            printf("o nome da cidade é: %s\n", nomecidade);
    // aqui eu peço o nome da cidade, que deve ser uma string de até 20 caracteres, e armazeno na variável nomecidade.
    // depois, imprimo o nome da cidade escolhida na tela.
    // eu nao sei o que acontece se o nome da cidade tiver mais de 20 caracteres, deveria testar
    
    int qntdpopulacao;
            printf("agora insira o número da população\n");
            scanf("%i", &qntdpopulacao);
            printf("a população inserida foi de: %i pessoas\n", qntdpopulacao);
    // aqui eu peço o número da população, que deve ser um inteiro, e armazeno na variável qntdpopulacao.
    // depois, imprimo o número da população escolhida na tela.

    float tamanhoarea;
        printf("agora, insira o tamanho da sua cidade\n");
        scanf("%f", &tamanhoarea);
        printf("o tamanho da cidade inserida foi: %f km²\n", tamanhoarea);
    // aqui eu peço o tamanho da cidade, que deve ser um número decimal, e armazeno na variável tamanhoarea.
    // depois, imprimo o tamanho da cidade escolhida na tela.
    // eu mudei de terceira pessoa para primeira pessoa, porque eu achei que ficou mais legal assim, mas não sei se é o certo a se fazer, o que você acha?

    float algarismopib;
        printf("agora, insira o pib da cidade, em bilhões de reais\n");
        scanf("%f", &algarismopib);
        printf("o pib inserido foi: R$%fB\n", algarismopib);
    // aqui eu peço o pib da cidade, que deve ser um número decimal, e armazeno na variável algarismopib.
    // depois, imprimo o pib escolhido na tela.
    // isso ta ficando massante

    int numeropontosturismo;
        printf("agora, insira o número de pontos turísticos\n");
        scanf("%i", &numeropontosturismo);
        printf("o número de pontos turísticos escolhidos foi: %i\n", numeropontosturismo);
    // aqui eu peço o número de pontos turísticos, que deve ser um inteiro, e armazeno na variável numeropontosturismo.
    // depois, imprimo o número de pontos turísticos escolhidos na tela.
    // cara, integer tem o limite de -9 x 10^19 até 9 x 10^19, o que da 4 bilhões de inteiros.
    // então se uma cidade tiver mais de 4 bilhões de pontos turísticos, o programa vai dar erro.
    //carta 2

        printf("vamos adicionar agora sua segunda carta, o processo será o mesmo.\n");
    // vamos adicionar agora sua segunda carta, o processo será o mesmo. chocante, não?

    char nomestado2[1];
        printf("primeiro, insira o nome do estado, sendo uma letra de 'A' a 'H', ok?\n");
        scanf("%s", nomestado2);
        printf("o estado escolhido foi: %s\n", nomestado2);
    // primeiro, solicitamos o nome do estado, que deve ser uma letra de 'A' a 'H', e armazenamos na variável nomestado.
    // depois, imprimimos o estado escolhido na tela.
    // eu vou ter que fazer isso de novo?

    char codcarta2[3];
            printf("ótimo! agora insira o código da carta. sendo ela a letra do estado + um numero de 01 a 04\n");
            scanf("%s", codcarta2);
            printf("carta escolhida: %s\n", codcarta2);
    // em seguida, pedimos o código da carta, que deve ser a letra do estado + um número de 01 a 04, e armazenamos na variável codcarta.
    // depois, imprimimos o código da carta escolhida na tela.

    char nomecidade2[20];
        printf("agora insira o nome da cidade\n");
        scanf("%s", nomecidade2);
        printf("a cidade escolhida foi: %s\n", nomecidade2);
    // aqui eu peço o nome da cidade, que deve ser uma string de até 20 caracteres, e armazeno na variável nomecidade.
    // depois, imprimo o nome da cidade escolhida na tela.

    int qntdpopulacao2;
        printf("agora insira o número da população\n");
        scanf("%i", &qntdpopulacao2);
        printf("a população escolhida foi: %i pessoas\n", qntdpopulacao2);
    // aqui eu peço o número da população, que deve ser um inteiro, e armazeno na variável qntdpopulacao.
    // depois, imprimo o número da população escolhida na tela.

    float tamanhoarea2;
        printf("agora, insira o tamanho da sua cidade\n");
        scanf("%f", &tamanhoarea2);
        printf("o tamanho da cidade escolhida inserida foi: %f km²\n", tamanhoarea2);
    // aqui eu peço o tamanho da cidade, que deve ser um número decimal, e armazeno na variável tamanhoarea.
    // depois, imprimo o tamanho da cidade escolhida na tela.

    float algarismopib2;
        printf("agora, insira o pib da cidade, em bilhões de reais\n");
        scanf("%f", &algarismopib2);
        printf("o pib inserido foi: R$%fB\n", algarismopib2);
    // aqui eu peço o pib da cidade, que deve ser um número decimal, e armazeno na variável algarismopib.
    // depois, imprimo o pib escolhido na tela.

    int numeropontosturismo2;
        printf("agora, insira o número de pontos turísticos\n");
        scanf("%i", &numeropontosturismo2);
        printf("o número de pontos turísticos escolhidos foi: %i\n", numeropontosturismo2);
    // aqui eu peço o número de pontos turísticos, que deve ser um inteiro, e armazeno na variável numeropontosturismo.
    // depois, imprimo o número de pontos turísticos escolhidos na tela.
    // que meus pecados sejam perdoados, mas a IA escreveu todos esses comentários da segunda parte, porque eu só quero sair pra caminhar, e não ficar escrevendo comentários.
    // inclusive isso foi ela também.

    //aqui eu to imprimindo os dados da carta 1 e da carta 2, pra ver se ta tudo certo :D
        printf("agora, vamos ver suas atribuições!\n");
        printf("Carta 1:\n");
        printf("Nome do estado: %s\n", nomestado);
        printf("Código da carta: %s\n", codcarta);
        printf("Nome da cidade: %s\n", nomecidade);
        printf("População: %i\n", qntdpopulacao);
        printf("Tamanho da área: %f km²\n", tamanhoarea);
        printf("PIB: %f bilhões de reais\n", algarismopib);
        printf("Número de pontos turísticos: %i\n", numeropontosturismo);
        printf("\n");
        printf("Carta 2:\n");
        printf("Nome do estado: %s\n", nomestado2);
        printf("Código da cartaa: %s\n", codcarta2);
        printf("Nome da cidade: %s\n", nomecidade2);
        printf("População: %i\n", qntdpopulacao2);
        printf("Tamanho da área: %f km²\n", tamanhoarea2);
        printf("PIB: %f bilhões de reais\n", algarismopib2);
        printf("Número de pontos turísticos: %i\n", numeropontosturismo2);
    
}

