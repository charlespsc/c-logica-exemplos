#include <stdio.h>

#define NUM_TENTATIVAS 5

int main() {
    
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");
    
    int numeroSecreto = 42;
    int chute;
    
    for(int i = 1; i <= NUM_TENTATIVAS; i++){
        printf("Tentativa %d de %d\n", i, NUM_TENTATIVAS);
        
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        
        if(chute < 0){
            printf("Você não pode chutar números negativos!\n");
            i--;
            
            continue; //quando quisermos continuar a execução do loop.
        }
    
        printf("Seu chute foi %d.\n", chute);
        
        int acertou = chute == numeroSecreto;
        int maior = chute > numeroSecreto;
        int menor = chute < numeroSecreto;
        
        if(acertou){
            printf("Parabéns! Você acertou!\n");
            printf("Jogue novamente, você é um bom jogador!\n");
            break;
        } else if (maior){
            printf("Seu chute foi maior que o número secreto.\n");
            } else {
                printf("Seu chute foi menor que o número secreto.\n");
            }
    }
    
    printf("\nFim de Jogo!");
   
    return 0;
}
