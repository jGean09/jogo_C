#include <stdio.h>
#include <stdlib.h>

void exibirTabela(char tab[3][3], int tam);

int main(void) {
    char tabela[3][3] = { {'r',' ',' '}, {' ', 'x', ' '}, {' ', ' ', 't'} };
    exibirTabela(tabela, 3); 
    return 0;
}

void exibirTabela(char tab[3][3], int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%c\t", tab[i][j]);
        }
        printf("\n");
    }
}
