#include <stdio.h>

//estrutura para guardar os dados do paciente
struct Paciente {
    char nome[50];
    int idade;
    char procedimento[50];
    float valorProced;
};

void exibirRelatorio(struct Paciente pacientes[], int numPaciente) {
    printf("\n");
    printf("Relatório de Pacientes e Procedimentos da Clínica Senai\n");
    printf("\n");
    
    for(int i = 0; i < numPaciente; i++) {
        printf("Paciente %d\n", i + 1);
        printf("Nome: %s\n", pacientes[i].nome);
        printf("Idade: %d\n", pacientes[i].idade);
        printf("Procedimento: %s\n", pacientes[i].procedimento);
        printf("Valor Procedimento: %.2f\n", pacientes[i].valorProced);
        printf("---------------------------------------\n");
    }
};

int main() {
    
    struct Paciente pacientes[3];
    int numPacientes = 0;
    char escolha;
    
    printf("### Registro de Pacientes da Clínica Senai ###\n");
    printf("\n");
    
    //loop de entrada de dados - Registro dos pacientes
    while(numPacientes < 3) {
        printf("Nome do paciente: ");
        scanf("%s", &pacientes[numPacientes].nome);
        
        printf("Informe a idade: ");
        scanf("%d", &pacientes[numPacientes].idade);
        
        printf("Informe o procedimento: ");
        scanf("%s", &pacientes[numPacientes].procedimento);
        
        printf("Informe o valor do procedimento: ");
        scanf("%f", &pacientes[numPacientes].valorProced);
        
        numPacientes++;
        
        printf("Deseja cadastrar mais um paciente? (s/n): ");
        scanf(" %c", &escolha);
        
        if(escolha != 's' && escolha != 'S') {
            break;
        }
        printf("\n");
    }
    
    //exibir o relatório:
    exibirRelatorio(pacientes, numPacientes);

    return 0;
}
