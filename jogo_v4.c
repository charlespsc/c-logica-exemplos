#include <stdio.h>
#include <stdlib.h>

int main() {
    
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");
    
    int numeroSecreto = 42;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    
    while(1) {
        printf("Tentativa %d\n", tentativas);
        
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        
        if(chute < 0){
            printf("Você não pode chutar números negativos!\n");
            continue; //quando quisermos continuar a execução do loop.
        }
    
        printf("Seu chute foi %d.\n", chute);
        
        int acertou = chute == numeroSecreto;
        int maior = chute > numeroSecreto;
        
        if(acertou){
            printf("Parabéns! Você acertou!\n");
            printf("Jogue novamente, você é um bom jogador!\n");
            
            break;
            
        } else if (maior){
            printf("Seu chute foi maior que o número secreto.\n");
            } else {
                printf("Seu chute foi menor que o número secreto.\n");
            }
        tentativas++;
        
        double pontosPerdidos = abs(chute - numeroSecreto) / (double)2; //Casting int para double e abs para tratar os números negativos.
        pontos = pontos - pontosPerdidos;
    }
    
    printf("\nFim de Jogo!\n");
    printf("Você acertou em %d tentativas!\n", tentativas);
    printf("Total de pontos: %.2f\n", pontos);
   
    return 0;
}
