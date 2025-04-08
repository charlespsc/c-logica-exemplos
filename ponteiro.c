#include <stdio.h>

void alteraValor(int *x){
    *x = 10; // modifica o valor da variável através do ponteiro
}

int main() {
    
    int valor = 5;
    
    printf("Variável ANTES de chamar a função: %d\n", valor);
    
    // Chamada da função:
    alteraValor(&valor);
    
    printf("Variável DEPOIS de chamar a função: %d\n", valor);

    return 0;
}
