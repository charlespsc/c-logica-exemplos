#include <stdio.h>
#include <string.h> // Necessário para sprintf

// Criar função somar:
int soma(int a,int b) {
    //corpo da função
    int result = a + b;
    return result;
}

// Função formarFrase
void formarFrase(char *fraseRetorno, int tamanhoBuffer, const char *nomeProf, int idadeProf) {
    sprintf(fraseRetorno, "O Prof. %s tem %d anos.", nomeProf, idadeProf);
}

int main() {
    
    int x = 10;
    int y = 20;
    int idade = 47;
    char nome[20] = "Charles"; // Use um array de char para strings em C
    char frase[50]; // Buffer para armazenar a frase formatada
    
    int resultSoma = soma(x, y);
    
    formarFrase(frase, sizeof(frase), nome, idade);

    printf("O resultado da soma é %d\n", resultSoma);
    printf("Frase de Retorno: %s\n", frase);
  
    return 0;
}
