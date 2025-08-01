#include <stdio.h>

#define TAM 5

int main() {
    int tabuleiro[TAM][TAM];
    int i, j;

    // Inicializando o tabuleiro com 0
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionando navio horizontal na linha 1, colunas 0 a 2
    tabuleiro[1][0] = 1;
    tabuleiro[1][1] = 1;
    tabuleiro[1][2] = 1;

    // Posicionando navio vertical na coluna 3, linhas 0 a 2
    tabuleiro[0][3] = 1;
    tabuleiro[1][3] = 1;
    tabuleiro[2][3] = 1;

    // Mostrando o tabuleiro com os navios
    printf("Tabuleiro:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
