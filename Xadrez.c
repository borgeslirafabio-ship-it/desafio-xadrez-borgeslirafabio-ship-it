
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





    return 0;
}
