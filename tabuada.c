#include <stdio.h>

int main() {
  int numero;
  
  printf("TABUADA\n");
  
  printf("Digite um número: ");
  scanf("%d", &numero);

  for(int i = 0; i <= 10; i++) {
    int multiplicacao = numero * i;
    printf("%d x %d = %d\n", numero, i, multiplicacao);
  }
}
