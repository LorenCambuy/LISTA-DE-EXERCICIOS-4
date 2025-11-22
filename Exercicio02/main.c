#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno vetor_alunos[5];
    int i, j;
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

	printf("\n---------------------------------------------------------\n");

    printf("\n----LISTA DE ALUNOS ----\n");
    for(i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", vetor_alunos[i].nome);
        printf("Idade: %d\n", vetor_alunos[i].idade);
        printf("Nota: %.2f\n\n", vetor_alunos[i].nota);
    }

    return 0;
}
