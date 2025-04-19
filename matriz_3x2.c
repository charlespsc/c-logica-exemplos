#include <stdio.h>

int main() {
    //criando a matriz 3x2
    int matriz[3][2] = {{1, 2},{3, 4}, {5, 6}};
    
    //contadores das linhas e das colunas
    int i; //3 linhas
    int j; //2 colunas
    
    //impressão da matriz 3x3 (linhas/colunas)
    for (i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

   return 0;
}
