// Tarefa: criar um vetor em que a pessoa digite uma quantidade de números (3), você deve armazenar todos os números em um vetor vazio com o mesmo tamanho.

#include <stdio.h>

int main() {
    // criar variáveis e constante
    const int n = 3;
    int vetA[n], vetB[n];
    int i;
    
    //vamos alimentar o nosso vetor A
    for(i = 0; i < n; i++) {
        printf("Informe o %dº número de %d: ", (i+1), n);
        scanf("%d", &vetA[i]);
    }
    
    //transferencia de dados do vetA para o vetB
    for(i = 0; i < n; i++){
        vetB[i] = vetA[i];
    }
    
    //impressão dos dados do vetor
    for(i = 0; i < n; i++){
        printf("Posição: %d - vetA[%d] e vetB[%d]\n", (i+1), vetA[i], vetB[i]);
    }

    return 0;
}
