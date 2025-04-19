#include <stdio.h>
//definição do struct Aluno
struct Aluno {
    char nome[80];
    int idade;
    int matricula;
    float notas[3];
};

int main() {
    //definir a matriz (vetor) de alunos (3 lunos)
    struct Aluno alunos[3];
    int i, j;
    
    //preencher os dados dos alunos
    for(i = 0; i < 3; i++){
        printf("Aluno %d\n", i+1);
        
        printf("Nome: ");
        scanf("%s", &alunos[i].nome);
        
        printf("Idade: ");
        scanf("%d", &alunos[i].idade);
        
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        
        //obter as notas do aluno
        for(j = 0; j < 3; j++){
            printf("Nota %d: ", j+1);
            scanf("%f", &alunos[i].notas[j]);
        }
        printf("\n");
    }
    
    //exibir os dados dos nossos alunos na tela
    for(i = 0; i < 3; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Matrícula: %d\n", alunos[i].matricula);
        
        //impressão das notas dos aluno:
        printf("Notas: %.2f - %.2f - %.2f", alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2]);
        printf("\n\n");
    }
    
    return 0;
}
