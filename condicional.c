#include <stdio.h>

int main() {
    int nota  = 4;
    int recuperacao = 0;
    
    //Verificando a nota do aluno
    if ((nota >= 5) && (nota < 7)) {
        printf("Você está em recuperação!");
    } else {
        if (nota >= 7){
            printf("Você passou!");
        } else {
            printf("Você não passou!");
        }
    }
    return 0;
}
