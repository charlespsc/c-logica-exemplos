#include <stdio.h>
#include <string.h> //Biblioteca para definir a struct Pessoa

struct Pessoa{
    char nome[50];
    int idade;
    float altura;
};
   
int main() {
   //criar uma variável "clienteA" com a estrutura da Struct Pessoa
   struct Pessoa clienteA;
   float salario; //variável fora da struct
   
   //inserir os dados do nosso 1º cliente
   strcpy(clienteA.nome, "Charles");
   clienteA.idade = 47;
   clienteA.altura = 1.55;
   salario = 130.32;
   
   //mostrando os dados na tela
   printf("Nome: %s\n", clienteA.nome);
   printf("Idade: %d\n", clienteA.idade);
   printf("Altura: %0.2f\n", clienteA.altura);
   printf("Salário: %.2f\n", salario);
   
   return 0;
}
