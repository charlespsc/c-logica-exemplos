#include <stdio.h>

int main() {
    float nota1  = 7.3;
    float nota2  = 5.5;
    float media = 0;
    
    //Calcular a média:
    media = ((nota1 + nota2) /2);
    
    //Mostrar a média:
    printf("Suas notas são: %.2f e %.2f.", nota1, nota2);
    printf("\nA média é %.2f", media);
    
    return 0;
}
