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

int main()
{   // Mover a torre 5 casas para direita 
  for (int t = 0; t < 5; t++) {
      
      printf("Direita\n"); // Imprime la direccion del movimiento
  }


int b = 0; // Mover o Bispo na Diagonal
while (b < 5) { 
  printf("Passo %d: Cima, Direita\n", b + 1); // Move a peça na diagonal do tabuleiro
    b++;
}


int r = 0;

    do { // Mover a Rainha em todas as direções
        
        printf("Passo %d: Esquerda\n"); // Mover a Rainha 8 casas para a Esquerda
        r++;
        
    } while (r < 8);



    int movimentoBaixo = 2;
    int movimentoEsquerda = 1;
    
    // Loop for: move o Cavalo duas casas para baixo
    
    for (int i = 0; i < movimentoBaixo; i++) {
        
        printf("Baixo\n");
        
       
    }
         // Loop while: move o Cavalo 1 casa para Esquerda
         
         int j = 0;
        
        while (j < movimentoEsquerda) {
            
            printf("Esquerda\n");
            j++;
        }
    return 0;
}
