#include <stdio.h>

void exibirRelatorio(float vendas[], int numTipos){
    printf("\nRelatório Geral de Vendas:\n");
    for(int i = 0; i < numTipos; i++){
        printf("Tipo %d: Qtde litros: %.2f\n", i+1, vendas[i]);
    }
};

int main() {
    
    float vendaCombustivel[3];
    int numTipos = 3;
    
    printf("Registro de Vendas Posto Senai: \n");
    
    //loop de entrada de dados - registro de vendas
    for(int i = 0; i < numTipos; i++){
        printf("Qtde de litros vendido do combustível %d: ", i + 1);
        scanf("%f", &vendaCombustivel[i]);
    }
    
    //exibir o relatório de vendas
    exibirRelatorio(vendaCombustivel, numTipos);
    
    return 0;
}
