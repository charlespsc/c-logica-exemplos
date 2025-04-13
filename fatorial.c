#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return (n * fatorial(n - 1)); //chanada recursiva
    }
}

int main() {
    
    int result = 0;
    int num;
    
    printf("Informe um número inteiro: ");
    scanf("%d", &num);
    
    if(num < 0){
        printf("O fatorial não está definido para números negativos!");
    } else {
        result = fatorial(num);
        printf("O fatorial de %d é %d", num, result);
    }

    return 0;
}
