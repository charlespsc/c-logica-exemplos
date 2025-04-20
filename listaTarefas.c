#include <stdio.h>
//função para exibir os itens da lista
void exibirLista(char tarefas[][50], int totalTarefas){
    printf("\nLista de Tarefas\n");
    
    for(int i = 0; i < totalTarefas; i++){
        printf("%d. %s", i+1, tarefas[i]);
    }
}


int main() {
    char listaTarefas[5][50]; //qtde tarefas e quantos caracteres
    int totalTarefas = 0;
    char escolha;
    
    printf("Informe suas tarefas diárias (máx. 5 tarefas): \n");
    
    //loop de entrada de dados
    while(totalTarefas < 5){
       printf("Tarefa %d: ", totalTarefas + 1);
       scanf("%s", listaTarefas[totalTarefas]);
       
       totalTarefas++;
       
       printf("Deseja adicionar mais uma tarefa? (s/n): ");
       scanf(" %c", &escolha);
       
       //validação da escolha do usuário
       if(escolha != 's' && escolha != 'S'){
           break;
       };
    }
    
    //exibição dos itens da lista
    exibirLista(listaTarefas, totalTarefas);

    return 0;
}
