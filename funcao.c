#include <stdio.h>

// Criar função somar:
int soma(int a,int b) {
    //corpo da função
    int result = a + b;
    return result;
}

int main() {
    
    int x = 10;
    int y = 20;
    
    int resultSoma = soma(x, y);
    
    printf("O resultado da soma é %d", resultSoma);
  
    return 0;
}
