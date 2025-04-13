#include <stdio.h>

int main() {
    
    int cont;
    
    //criar vetor
    int notaAluno[5];
    
    //obter dados do teclado
    for (cont = 1; cont <= 5; cont++){
        printf("Informe a nota do %d aluno: ", cont);
        scanf("%d", &notaAluno[cont]);
    }
    
    printf("\nAgora vamos mostrar as notas que estão no vetor:\n");
    
    for(cont = 1; cont <= 5; cont++) {
        printf("Nota do aluno %d: %d\n", cont, notaAluno[cont]);
    }
    
    return 0;
}
