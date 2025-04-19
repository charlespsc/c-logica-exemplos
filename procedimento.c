#include <stdio.h>

//criando a função para exibir os itens
void exibirLista(char itens[][50], int totalItens){
    printf("Lista de Compras:\n");
    
    for(int i = 0; i < totalItens; i++) {
        printf("%d. %s\n", i+1, itens[i]);
    };
};

int main() {
    //criando variáveis e vetor que armazena os itens de compra
    char itensCompra[10][50]; //10 itens com 50 caracteres
    int totalItens = 0;
    char escolha;
    
    printf("Informe os itens da sua lista (até 10 itens): \n");
    
    //loop 
    while(totalItens < 10) {
        printf("Item %d: ", totalItens + 1);
        scanf("%s", itensCompra[totalItens]);
        
        totalItens++;
        
        printf("Adicionar outro item? (s/n): \n");
        scanf(" %c", &escolha);
        
        //validar a escolha
        if ((escolha != 's') && (escolha != 'S')){
            break;
        }
    }
    
    //exibir os itens que inserimos no vetor
    exibirLista(itensCompra, totalItens);

    return 0;
}
