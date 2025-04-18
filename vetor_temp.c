#include <stdio.h>

int main() {
    //vetor para armazenar a temperatura:
    float temp[7];
    int cont;
    float somaTemp = 0;
    float mediaTemp = 0;
    
    //obter as temperaturas diárias:
    for(cont = 1; cont <= 7; cont++) {
        printf("Temperatura do %dº dia: ", cont);
        scanf("%f", &temp[cont]);
        
        //armazenar a soma das temperaturas:
        somaTemp = somaTemp + temp[cont];
    }

    //média da semana:
    mediaTemp = (somaTemp / 7);
    
    //mostrar a média da temperatura:
    printf("A média de temperatura da semana foi %.2f", mediaTemp);
    
    return 0;
}
