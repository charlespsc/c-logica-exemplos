#include <stdio.h>

int main() {
    
    int cont;
    float media = 0;
    int somaNota = 0;
    int maior = 0;
    int menor = 0;
    
    //criar vetor
    int notaAluno[5];
    
    //obter dados do teclado
    for (cont = 1; cont <= 5; cont++){
        printf("Informe a nota do %d aluno: ", cont);
        scanf("%d", &notaAluno[cont]);
        
        //armazenar as notas para calcular a media mais tarde...
        somaNota = somaNota + notaAluno[cont];
        
        //verificar a nota do aluno, se maior ou menor que 7
        if (notaAluno[cont] > 7) {
            maior = maior + 1;
        } else {
            if (notaAluno[cont] < 7) {
                menor = menor +1; 
            }
        }
    }
    
    printf("\nAgora vamos mostrar as notas que estão no vetor:\n");
    
    for(cont = 1; cont <= 5; cont++) {
        printf("Nota do aluno %d: %d\n", cont, notaAluno[cont]);
    }
    
    //calcular a média da turma
    media = somaNota / (cont - 1);
    
    printf("\nA média da turma é: %.2f", media);
    printf("\nQtde de alunos com nota maior que 7: %d", maior);
    printf("\nQtde de alunos com nota maior que 7: %d", menor);
    
    return 0;
}
