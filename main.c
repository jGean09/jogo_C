#include <stdio.h>

int main(void) {
    char tabela[3][3] = { {'0', '1', '2'}, {'3', '4', '5'}, {'6', '7', '8'} };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c\t", tabela[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
