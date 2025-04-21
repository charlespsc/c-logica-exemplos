#include <stdio.h>

#define MAX_PACIENTE 5

struct Paciente {
    char nome[50];
    int idade;
    int numQuarto;
};

//criar a função do relatório
void exibirRelatorio(struct Paciente pacientes[], int numPacientes) {
    printf("\n*** Registro de Pacientes no Hospital Senai ***\n");
    for(int i = 0; i < numPacientes; i++){
        printf("Paciente %d.", i + 1);
        printf("Nome: %s\n", pacientes[i].nome);
        printf("Idade: %d\n", pacientes[i].idade);
        printf("Quarto: %d\n", pacientes[i].numQuarto);
        printf("\n");
    }
};

int main() {
    
    struct Paciente pacientes[MAX_PACIENTE];
    int numPacientes = 0;
    char escolha;
    
    printf("Registro de Pacientes no Hospital Senai\n");
    
    //obtendo os dados dos pacientes:
    while(numPacientes < MAX_PACIENTE){
        printf("Nome do Paciente: ");
        scanf("%s", &pacientes[numPacientes].nome);
        
        printf("Idade do Paciente: ");
        scanf("%d", &pacientes[numPacientes].idade);
        
        printf("Qual o quarto? ");
        scanf("%d", &pacientes[numPacientes].numQuarto);
        
        numPacientes++;
        
        printf("Você deseja registrar mais um paciente? (s/n)");
        scanf(" %c", &escolha);
        
        //validação da escolha do usuário
        if(escolha != 's' && escolha != 'S'){
            break;
        }
    }
    
    //exibir o relatório
    exibirRelatorio(pacientes, numPacientes);

    return 0;
}
