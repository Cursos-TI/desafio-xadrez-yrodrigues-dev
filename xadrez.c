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
        


return 0;

}