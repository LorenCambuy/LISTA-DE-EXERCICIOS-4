#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {

    struct Aluno vetor_alunos[5];
    int i, j, indice;
    char c;

    printf("---- CADASTRO DE ALUNOS ----\n");

    
    for(i = 0; i < 5; i++) {
    	
        printf("\n%d aluno\n", i + 1);

        // Preenchendo o nome letra por letra
        printf("Nome: ");
        
        j = 0;
        while(1) {
            c = getchar();        // lê 1 caractere
            if(c == '\n') break;  // termina ao apertar Enter
            
            if(j < 49) {          // evita ultrapassar o tamanho do vetor
                vetor_alunos[i].nome[j] = c;
                j++;
            }
        }
        
        vetor_alunos[i].nome[j] = '\0'; // finaliza a string

        printf("Idade: ");
        scanf("%d", &vetor_alunos[i].idade);

        printf("Nota: ");
        scanf("%f", &vetor_alunos[i].nota);

        getchar();
    }

    printf("\n---- LISTA DE ALUNOS ----\n");

    for(i = 0; i < 5; i++) {
        printf("Indice %d - Nome: %s | Idade: %d | Nota: %.2f\n", i,vetor_alunos[i].nome,vetor_alunos[i].idade,vetor_alunos[i].nota);
    }

    printf("\nDigite o indice do aluno que deseja atualizar a nota (0 a 4): ");
    scanf("%d", &indice);

    if(indice < 0 || indice > 4) {
        printf("Indice invalido!\n");
        return 0;
    }

    printf("Digite a nova nota: ");
    scanf("%f", &vetor_alunos[indice].nota);

	printf("\n---- DADOS ATUALIZADOS DO ALUNO DE INDICE %d ----\n", indice);
    printf("Aluno: %s\n", vetor_alunos[indice].nome);
    printf("Idade: %d\n", vetor_alunos[indice].idade);
    printf("Nota: %.2f\n", vetor_alunos[indice].nota);

    return 0;
}
