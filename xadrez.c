#include <stdio.h>

int main() {
    // =========== TORRE ===========
    int t;
    printf("\nMovimento da Torre:\n");
        for ( t = 1; t <=5; t++) {
            printf("Direita\n");
        }

    // =========== BISPO ===========

    int b = 1;
    printf("\nMovimento do Bispo:\n");
        while (b <= 5)
        {
            printf("Cima, Direira\n"); b++;
        }
        
    // =========== RAINHA ===========

    int r = 1;
    printf("\nMovimento da Rainha:\n");
        do
        {
            printf("Esquerda\n"); r++;
        } while (r <= 8);

    // ==================== CAVALO ====================
    
    int passos1 = 2;
    int passos2 = 1;
    printf("\nMovimento do Cavalo:\n");

        for(int x = 1; x <= passos1; x++) {
            printf("Baixo\n");

        }

    int y = 1;
        while (y <= passos2) {
            printf("Esquerda\n");
            y++;

        }

return 0;
}
        