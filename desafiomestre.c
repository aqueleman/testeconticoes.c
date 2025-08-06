#include <stdio.h>

void moverTorre(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Torre se movimentou para a direita (%d)\n", i + 1);
    }
}

int main() {
    moverTorre(5);

    // Cavalo: 2 para cima + 1 para direita
    for (int i = 0; i < 2; i++) {
        printf("Cavalo se movimentou para cima (%d)\n", i + 1);
    }
    printf("Cavalo se movimentou para a direita\n\n");

    // Bispo: 5 casas em diagonal esquerda
    for (int i = 0; i < 5; i++) {
        printf("Bispo se movimentou pela diagonal esquerda (%d)\n", i + 1);
    }
    printf("\n");
    
    // Rainha: 8 para direita
    for (int i = 0; i < 8; i++) {
        printf("Rainha se movimentou para a direita (%d)\n", i + 1);
    }

    return 0;
}
