#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

//declaração de variáveis

int opcao, casas_andadas;
char direcao1[20];
char direcao2[20];


//iniciando o usuário ao jogo

    printf("Vamos jogar xadrez? Escolha uma das três abaixo. \n\n");
    printf("1 para Bispo\n");
    printf("2 para Torre\n");
    printf("3 para Rainha\n");

        scanf("%d", &opcao);

        switch (opcao)
    {
    case 1:
    printf("Você escolheu o bispo, ele anda na diagonal escolha qunatas casas ele vai andar \n");

        scanf("%d", &casas_andadas);


    printf("Escolha a direção (para cima ou para baixo) \n");
        scanf("%s", direcao1);

    printf("Escolha a direção (esquerda ou direita) \n");
        scanf("%s", direcao2);

    while (casas_andadas <= 10)
    {
    printf("%s, ", direcao1);
    printf("%s, ", direcao2);
        casas_andadas++;
    }
    
    
        break;
    case 2:
   printf("Você escolheu o bispo, ele anda na diagonal escolha qunatas casas ele vai andar \n");

        scanf("%d", &casas_andadas);

    printf("Escolha a direção (para frente, para trás, esquerda ou direita) \n");
        scanf("%s ", direcao1);

    do{
    
    printf("%s \n", direcao1);
 
        casas_andadas++;
        
    } while  (casas_andadas <= 10);

        break;

    case 3:

    printf("Você escolheu a rainha, ela anda para todas as direções, escolha quantas casas el vai andar\n");
        scanf("%d", &casas_andadas);

    printf("Escolha a direção (para cima, para baixo, para frente ou para trás) \n");
        scanf("%s", direcao1);

    printf("Escolha a 2° direção (esquerda ou direita) \n");
        scanf("%s", direcao2);

    for ( casas_andadas = 0; casas_andadas <= 10; casas_andadas++){
    printf("%s, ", direcao1);
    printf("%s, ", direcao2);
        
    }
    
        break;
    
    default:
    printf("Você não escolheu uma peça válida");
        break;
    }
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
