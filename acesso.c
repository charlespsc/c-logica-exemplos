#include <string.h>

int main() {
    char senha[] = "abc123";
    char senhaCorreta[] = "amarelo";
    
    //Verificando senha
    if (strcmp(senha, senhaCorreta) == 0) {
        printf("Acesso Permitido!");
    } else {
        printf("Acesso Negado!");
        printf("\nUsuário ou Senha incorreto!");
    }
    
    return 0;
}
