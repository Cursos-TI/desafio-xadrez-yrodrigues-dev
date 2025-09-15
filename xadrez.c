#include <stdio.h>

// ==================== TORRE (Recursividade) ====================
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// ==================== BISPO (Recursividade + Loops Aninhados) ====================
void moverBispo(int casas) {
    if (casas == 0) return; // condição de parada

    // Loop externo para o movimento vertical
    for (int i = 0; i < 1; i++) {
        // Loop interno para o movimento horizontal
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

// ==================== RAINHA (Recursividade) ====================
void moverRainha(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// ==================== CAVALO (Loops Complexos) ====================
void moverCavalo() {
    int movimentosVertical = 2; // duas casas para cima
    int movimentosHorizontal = 1; // uma casa para direita

    printf("\nMovimento do Cavalo:\n");

    // Loop externo controla as casas para cima
    for (int i = 1; i <= movimentosVertical; i++) {
        if (i == 2) {
            // Apenas para demonstrar uso de continue
            continue; // pula a segunda casa (apenas como exemplo de controle de fluxo)
        }
        printf("Cima\n");
    }

    // Loop interno controla a casa para direita
    int j = 0;
    while (j < movimentosHorizontal) {
        if (j == -1) break; // condição impossível, só para mostrar uso do break
        printf("Direita\n");
        j++;
    }

    // Corrige a casa pulada pelo continue, garantindo que o Cavalo mova 2 vezes para cima
    printf("Cima\n");
}

int main() {
    // ==================== TORRE ====================
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // ==================== BISPO ====================
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // ==================== RAINHA ====================
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // ==================== CAVALO ====================
    moverCavalo();

    return 0;
}
