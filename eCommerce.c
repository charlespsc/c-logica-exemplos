#include <stdio.h>

struct Produto {
    char nome[50];
    float preco;
};

//função de adicionar itens ao carrinho
void adicionarAoCarrinho(struct Produto carrinho[], int *numProdutos, struct Produto novoProduto){
    if (*numProdutos < 10){
        carrinho[*numProdutos] = novoProduto;
        (*numProdutos)++;
    } else {
        printf("Carrinho cheio. Não é possível adicionar mais itens!\n");
    }
};

//calcular valor total
float calcularTotal(struct Produto carrinho[], int numProdutos){
    float total = 0;
    for(int i = 0; i < numProdutos; i++) {
        total += carrinho[i].preco;
    }
    return total;
}

int main() {
    
    struct Produto produtosDisp[3] = {
        {"Camiseta Branca", 29.90},
        {"Calça Jeans", 190.50},
        {"Tênis", 299.90}
    };
    
    struct Produto carrinho[10];
    int numProdutos = 0;
    
    printf("Produtos Disponíveis: \n");
    for(int i = 0; i < 3; i++) {
        printf("%d. %s - R$ %.2f\n", i + 1, produtosDisp[i].nome, produtosDisp[i].preco);
    }
    
    while(1){
        int escolha;
        
        printf("Escolha um produto para adicionar no carrinho (0 para sair): ");
        scanf("%d", &escolha);
        
        if (escolha == 0){
            break;
        } else if (escolha >= 1 && escolha <= 3){
            adicionarAoCarrinho(carrinho, &numProdutos, produtosDisp[escolha - 1]);
            printf("Produto adicionado ao carrinho.");
        } else {
            printf("Opção Inválida!");
        }
    }
        
    float totalCompra = calcularTotal(carrinho, numProdutos);
    printf("Total da Compra R$ %.2f", totalCompra);
    
    return 0;
}
