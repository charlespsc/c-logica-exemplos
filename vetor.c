#include <stdio.h>

int main() {
    //declaração de um vetor
    int idades[4];
    int contador;
    
    for(contador = 0; contador <= 4; contador++) {
        printf("Informe a idade da pessoa %d: ", contador + 1);
        scanf("%d", &idades[contador]);
    }
    
    for(contador = 0; contador <= 4; contador++) {
        printf("\nPessoa %d: Idade: %d", contador + 1, idades[contador]);
    }

    return 0;
}
