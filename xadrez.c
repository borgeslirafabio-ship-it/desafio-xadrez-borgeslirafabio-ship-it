#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
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
        
            
                                                // Jogo de Xadrez ------

#include <stdio.h>

// Torre - recursiva conforme seu código
void recursiveLoop(int t) {
    if (t > 0) {
        printf("Direita\n");
        recursiveLoop(t - 1);
    }
}

// Bispo - recursiva + loops aninhados
void moverBispo(int passos) {
    if (passos > 0) {
        for (int i = 0; i < 1; i++) {  // movimento vertical
            printf("Cima\n");
        }
        for (int j = 0; j < 1; j++) {  // movimento horizontal
            printf("Direita\n");
        }
        moverBispo(passos - 1);
    }
}

// Rainha - recursiva
void moverRainha(int passos) {
    if (passos > 0) {
        printf("Esquerda\n");
        moverRainha(passos - 1);
    }
}

// Cavalo - loops aninhados complexos
void moverCavalo() {
    int movimentosCima = 2;
    int movimentosDireita = 1;

    for (int i = 0; i < movimentosCima + movimentosDireita; i++) {
        if (i < movimentosCima) {
            printf("Cima\n");
            continue;
        }
        if (i == movimentosCima) {
            printf("Direita\n");
            break;
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    recursiveLoop(4);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
