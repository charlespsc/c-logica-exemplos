#include <stdio.h>

struct Livro {
    char titulo[100];
    char autor[100];
    int ano;
    int emprestado;
};

//função para emprestar um livro:
void emprestarLivro(struct Livro *livro) {
    if (livro -> emprestado == 0){
        livro -> emprestado == 1;
        printf("Livro \"%s\" emprestado com sucesso!\n", livro -> titulo);
    } else {
        printf("Este livro já está emprestado!");
    }
}

//função para devolver um livro:
void devolverLivro(struct Livro *livro){
    if(livro -> emprestado == 1){
        livro -> emprestado = 0;
        printf("Livro \"%s\" devolvido com sucesso! \n", livro -> titulo);
    } else {
        printf("Este livro não estava emprestado\n");
    }
}

int main() {
    //cadastro dos Livros
    struct Livro livro1 = {"Dom Casmurro", "Machado de Assis", 1899, 0};
    struct Livro livro2 = {"1984", "George Owell", 1949, 1}; 
    
    struct Livro *livros[] = {&livro1, &livro2};
    int numLivros = sizeof(livros) / sizeof(livros[0]);
    
    printf("Livros Cadastrados: \n");
    for(int i = 0; i < numLivros; i++){
        printf("%d. %s\n", i + 1, livros[i] -> titulo);
    }
    
    int opcao;
    printf("Escolha o número do livro: ");
    scanf("%d", &opcao);
    
    if(opcao >= 1 && opcao <= numLivros){
        printf("Escolha a opção: \n");
        printf("1. Emprestar o livro\n");
        printf("2. Devolver o livro\n");
        
        int acao;
        scanf("%d", &acao);
        
        if (acao == 1){
            emprestarLivro(livros[opcao -1]);
        } else if (acao == 2) {
            devolverLivro(livros[opcao -1]);
        } else {
            printf("Livro não existe!");
        }
    }

    return 0;
}
