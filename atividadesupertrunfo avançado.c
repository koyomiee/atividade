#include <stdio.h>
#include <stdbool.h>

int main() {
        printf("bem vindo ao super trunfo!\n");
    
    char nomestado;
        printf("primeiro, insira a letra do estado, sendo uma letra maíuscula de 'A' a 'H', ok?\n");
        scanf(" %c", &nomestado);
        printf("a letra de estado escolhida foi: %c\n", nomestado);
    // primeiro, solicitamos o nome do estado, que deve ser uma letra de 'A' a 'H', e armazenamos na variável nomestado.
    // depois, imprimimos o estado escolhido na tela.
    char codcarta[4];
            printf("ótimo! agora insira o código da carta. sendo ela a letra do estado + um numero de 01 a 04\n");
            scanf(" %3s", codcarta);
            printf("o código da carta escolhida foi: %s\n", codcarta);
    //tive que especificar o %3s, dava algum erro de buffer ou memória, que cumulava e impedia os printf lá embaixo
    // em seguida, pedimos o código da carta, que deve ser a letra do estado + um número de 01 a 04, e armazenamos na variável codcarta.
    // depois, imprimimos o código da carta escolhida na tela.
    // (eu queria ter uma forma de sanitizar a entrada, adicionando a variável 'nomestado' na variável 'codcarta', mas não sei como fazer isso ainda, então vou deixar assim por enquanto);
    char nomecidade[20];
            printf("agora insira o nome da cidade\n");
            scanf(" %3s", nomecidade);
            printf("o nome da cidade é: %s\n", nomecidade);
    // aqui eu peço o nome da cidade, que deve ser uma string de até 20 caracteres, e armazeno na variável nomecidade.
    // depois, imprimo o nome da cidade escolhida na tela.
    // eu nao sei o que acontece se o nome da cidade tiver mais de 20 caracteres, deveria testar
    
    int qntdpopulacao;
        printf("agora insira o número da população\n");
        scanf(" %i", &qntdpopulacao);
        printf("a população escolhida foi: %i pessoas\n", qntdpopulacao);
    // aqui eu peço o número da população, que deve ser um inteiro, e armazeno na variável qntdpopulacao.
    // depois, imprimo o número da população escolhida na tela.

    float tamanhoarea;
        printf("agora, insira o tamanho da sua cidade\n");
        scanf("%f", &tamanhoarea);
        printf("o tamanho da cidade inserida foi: %f km²\n", tamanhoarea);
    // aqui eu peço o tamanho da cidade, que deve ser um número decimal, e armazeno na variável tamanhoarea.
    // depois, imprimo o tamanho da cidade escolhida na tela.
    // eu mudei de terceira pessoa para primeira pessoa, porque eu achei que ficou mais legal assim, mas não sei se é o certo a se fazer, o que você acha?

    float calculodensidade = qntdpopulacao / tamanhoarea; 
    // aqui eu declaro uma variável calculodensidade, que é o resultado da divisão entre a quantidade de pessoas e o tamanho da cidade
    float algarismopib;
        printf("agora, insira o pib da cidade, em bilhões de reais\n");
        scanf("%f", &algarismopib);
        printf("o pib inserido foi: R$%fB\n", algarismopib);
    // aqui eu peço o pib da cidade, que deve ser um número decimal, e armazeno na variável algarismopib.
    // depois, imprimo o pib escolhido na tela.
    // isso ta ficando massante

    float calculopib = algarismopib / qntdpopulacao;
    // aqui eu declaro uma variável calculopib, que é o resultado da divisão entre o valor do PIB e o tamanho da cidade
    // cacete, algarismo é um número individual e eu nomeei como se fosse o valor inteiro.
    // tarde demais, vai apodrecer assim.
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

    char nomestado2;
        printf("primeiro, insira a letra do estado, sendo uma letra de 'A' a 'H', ok?\n");
        scanf(" %c", &nomestado2);
        printf("o estado escolhido foi: %c\n", nomestado2);
    // primeiro, solicitamos o nome do estado, que deve ser uma letra de 'A' a 'H', e armazenamos na variável nomestado.
    // depois, imprimimos o estado escolhido na tela.
    // eu vou ter que fazer isso de novo?

    char codcarta2[4];
            printf("ótimo! agora insira o código da carta. sendo ela a letra do estado + um numero de 01 a 04\n");
            scanf(" %19s", codcarta2);
            printf("carta escolhida: %s\n", codcarta2);
    // em seguida, pedimos o código da carta, que deve ser a letra do estado + um número de 01 a 04, e armazenamos na variável codcarta.
    // depois, imprimimos o código da carta escolhida na tela.

    char nomecidade2[20];
        printf("agora insira o nome da cidade\n");
        scanf(" %19s", nomecidade2);
        printf("a cidade escolhida foi: %s\n", nomecidade2);
    // aqui eu peço o nome da cidade, que deve ser uma string de até 20 caracteres, e armazeno na variável nomecidade.
    // depois, imprimo o nome da cidade escolhida na tela.

    int qntdpopulacao2;
        printf("agora insira o número da população\n");
        scanf(" %i", &qntdpopulacao2);
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
        scanf(" %i", &numeropontosturismo2);
        printf("o número de pontos turísticos escolhidos foi: %i\n", numeropontosturismo2);
    // aqui eu peço o número de pontos turísticos, que deve ser um inteiro, e armazeno na variável numeropontosturismo.
    // depois, imprimo o número de pontos turísticos escolhidos na tela.
    // que meus pecados sejam perdoados, mas a IA escreveu todos esses comentários da segunda parte, porque eu só quero sair pra caminhar, e não ficar escrevendo comentários.
    // inclusive isso foi ela também.
    
    float calculodensidade2 = qntdpopulacao2 / tamanhoarea2;
    float calculopib2 = algarismopib2 / qntdpopulacao2;

    //agora vou começar a calcular o superpoder. 
    //tentei descer as equações de densidade e tal, mas deu erro de memória

    float quocientesuperpoder = qntdpopulacao + tamanhoarea + algarismopib + numeropontosturismo + calculopib + (1 / calculodensidade);
    float quocientesuperpoder2 = qntdpopulacao2 + tamanhoarea2 + algarismopib2 + numeropontosturismo2 + calculopib2 + (1 / calculodensidade2);

    //aqui eu to imprimindo os dados da carta 1 e da carta 2, pra ver se ta tudo certo :D
        printf("agora, vamos ver suas atribuições!\n");
        printf("Carta 1:\n");
        printf("Letra do estado: %c\n", nomestado);
        printf("Código da carta: %s\n", codcarta); //-algum bug faz essa string imprimir o código da carta 1 e 2, sem cabeça pra consertar.- consertei
        printf("Nome da cidade: %s\n", nomecidade);
        printf("População: %i\n", qntdpopulacao);
        printf("Tamanho da área: %f km²\n", tamanhoarea);
        printf("A densidade populacional é de %f por km² \n", calculodensidade);
        printf("PIB: %f bilhões de reais\n", algarismopib);
        printf("O PIB per capita é: %f\n", calculopib);
        printf("Número de pontos turísticos: %i\n", numeropontosturismo);
        printf("\n");
        printf("Carta 2:\n");
        printf("Letra do estado: %c\n", nomestado2);
        printf("Código da carta: %s\n", codcarta2); 
        printf("Nome da cidade: %s\n", nomecidade2);
        printf("População: %i\n", qntdpopulacao2); //-outro bug causa a saída desse ser 5622 ao invés de 6748000- erro de buffer por causa da bosta do scanf do codcarta
        printf("Tamanho da área: %f km²\n", tamanhoarea2);
        printf("A densidade populacional é de %f por km² \n", calculodensidade2);
        printf("PIB: %f bilhões de reais\n", algarismopib2);
        printf("O PIB per capita é: %f\n", calculopib2);
        printf("Número de pontos turísticos: %i\n", numeropontosturismo2);
        printf("\n");
        //aqui eu imprimo o superpoder de cada carta, depois dos atributos. partindo para comparar-lós
        printf("O super poder da carta um é: %f pontos\n", quocientesuperpoder);
        printf("O super poder da carta dois é: %f pontos\n", quocientesuperpoder2);
        //essa linha foi provavelmente a única que funcionou direito
    bool populacaowin = qntdpopulacao > qntdpopulacao2;
    bool areawin = tamanhoarea > tamanhoarea2;
    bool pibwin = algarismopib > algarismopib2;
    bool turismowin = numeropontosturismo > numeropontosturismo2;
    bool percapitawin = calculopib > calculopib2;
    bool densidadewin = calculodensidade2 > calculodensidade;
    bool superpoderwin = quocientesuperpoder > quocientesuperpoder2;
    //bool, bool, bool! não sei se tem como escrever isso melhor, mas achei que faria sentido pedir um valor pra cada comparação

    if (populacaowin){
        printf("\nCarta 1 venceu em população!\n");
    } else {
        printf("\nCarta 2 venceu em população!\n");
    }

    if (areawin){
        printf("\nCarta 1 venceu em tamanho!\n");
    } else {
        printf("\nCarta 2 venceu em tamanho!\n");
    }

    if (pibwin){
        printf("\nCarta 1 venceu em PIB!\n");
    } else {
        printf("\nCarta 2 venceu em PIB!\n");
    }
        
    if (turismowin){
        printf("\nCarta 1 venceu em número de pontos turísticos!\n");
    } else {
        printf("\nCarta 2 venceu em número de pontos turísticos!\n");
    }

    if (percapitawin){
        printf("\nCarta 1 venceu em PIB per capita!\n");
    } else {
        printf("\nCarta 2 venceu em PIB per capita!\n");
    }

    if (densidadewin){
        printf("\nCarta 1 venceu em densidade populacional!\n");
    } else {
        printf("\nCarta 2 venceu em densidade populacional!\n");
    }

    if (superpoderwin){
        printf("\nCarta 1 venceu em pontos de SuperPoder!\n");
    } else {
        printf("\nCarta 2 venceu em pontos de SuperPoder\n");
    }
    //if else é repetitivo assim mesmo, professor?

    return 0;

}

// escrito e testado no windows 11 Insider Preview (10.0.26120.4151)
// era, a uns 3 dias atrás, agora tá uma mistura disso com linux (não sei a versão. qualquer que seja a versão do codespace)