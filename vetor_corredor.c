#include <stdio.h>

int main() {
    // criar variáveis e vetor
    int numCorredor = 3;
    float tempoVolta[numCorredor];//tamanho do vetor é o tamanho da variável numCorredor
    int cont;
    
    //alimentar o vetor
    for (cont = 1; cont <= numCorredor; cont++) {
        printf("Tempo do corredor %d: ", cont);
        scanf("%f", &tempoVolta[cont]);
    }
    
    //impressão dos dados na tela
    for(cont = 1; cont <= numCorredor; cont++) {
        printf("Corredor %d: %.2f segundos.\n", cont, tempoVolta[cont]);
    }

    return 0;
}
