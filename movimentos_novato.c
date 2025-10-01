#include <stdio.h>

// --- Constantes para organizar o jogo ---
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_RAINHA 8

int main() {
    
    // --- Movimento da Torre (usando o loop FOR) ---
    printf("--- Movimento da Torre (5 casas) ---\n");
    int i;
    for (i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }

    // --- Movimento do Bispo (usando o loop WHILE) ---
    printf("\n--- Movimento do Bispo (5 casas) ---\n");
    int contador_bispo = 0; 
    while (contador_bispo < MOVIMENTOS_BISPO) { 
        printf("Cima, Direita\n");
        contador_bispo++; 
    }

    // --- Movimento da Rainha (usando o loop DO-WHILE) ---
    printf("\n--- Movimento da Rainha (8 casas) ---\n");
    int contador_rainha = 0; 
    do {
        printf("Esquerda\n");
        contador_rainha++; 
    } while (contador_rainha < MOVIMENTOS_RAINHA); 

    return 0;
}