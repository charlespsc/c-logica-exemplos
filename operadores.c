#include <stdio.h>

int main() {
    char nome[] = "Charles";
    int idade = 47;
    float altura = 1.72;
    
    printf("Nome: %s", nome);
    printf("\nIdade: %i", idade);
    printf("\nAltura: %.2f", altura);
    
    // Operador E &&
    // Operador OU ||
    // Operador de comparação ==
    
    if ((idade >= 18) && (altura >= 1.50)) {
        printf("\nAutorizada Entrada");
    } else {
        printf("\nEntrada não autorizada!");
    }
    
    return 0;
}
