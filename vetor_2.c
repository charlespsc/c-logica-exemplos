#include <stdio.h>

int main() {
    
    // criar vetor
    int abacate[3];
    
    //inserindo a compra
    abacate[1] = 10;
    abacate[2] = 20;
    abacate[3] = 30;
    
    //impressão da qtde de compra
    printf("Qtde abacates do 1º Cliente: %d\n", abacate[1]);
    printf("Qtde abacates do 2º Cliente: %d\n", abacate[2]);
    printf("Qtde abacates do 3º Cliente: %d\n", abacate[3]);
    
    //alterar a quantidade
    abacate[1] = 5;
    abacate[2] = 3;
    abacate[3] = -1; //desistiu da compra
    
    for(int i = 1; i<= 3; i++){
        if (abacate[i] != -1) {
            printf("Qtde abacates do %dº Cliente: %d\n", i, abacate[i]);
        } 
    }
            
    return 0;
}
