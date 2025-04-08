#include <stdio.h>
#include <string.h>

int main() {
    char senha[] = "amarelo";
    char senhaCorreta[] = "amarelo";
    int idade = 15;
    
    //Verificando senha
    if (strcmp(senha, senhaCorreta) == 0) {
        printf("Acesso Permitido!");
        
        //Validar a entrada:
        if (idade >= 18) {
            printf("\nSeja bem-vindo(a)!");
        } else {
            printf("\nVocê é menor de idade!");
        }
        
    } else {
        printf("Acesso Negado!");
        printf("\nUsuário ou Senha incorreto!");
    }
    
    return 0;
}
