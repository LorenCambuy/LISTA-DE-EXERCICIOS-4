#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[4];
    int quantidade = 0;
    int opcao, indice;
    int i;

    do {
        printf("---- MENU ----\n");
        printf("1 - Criar novo aluno\n");
        printf("2 - Exibir todos os alunos\n");
        printf("3 - Remover aluno\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // limpa \n do buffer

        switch(opcao) {
            case 1:
            	
                if(quantidade >= 4) {
                    printf("\n Array cheio");
                } 
				else {
					
					printf("\n");
                    printf("Nome: ");
                    scanf(" %[^\n]", alunos[quantidade].nome);

                    printf("Idade: ");
                    scanf("%d", &alunos[quantidade].idade);

                    printf("Nota: ");
                    scanf("%f", &alunos[quantidade].nota);
                    getchar(); // limpa \n do buffer

                    quantidade++;
                
                    printf("\nAluno adicionado com sucesso");
                    printf("\n");
                }
                break;

            case 2:
                if(quantidade == 0) {
                    printf("\nNenhum aluno cadastrado.");
                } 
				else {
                    printf("\n---- LISTA DE ALUNOS ----\n");
                    
                    for(i = 0; i < quantidade; i++) {
                        printf("[%d] Nome: %s | Idade: %d | Nota: %.2f\n",
                               i, alunos[i].nome, alunos[i].idade, alunos[i].nota);
                    }
                    printf("\n");
                }
                break;

            case 3:
                if(quantidade == 0) {
                    printf("\nNenhum aluno para remover.");
                } 
				else {
                    printf("\nDigite o indice do aluno a remover: ");
                    scanf("%d", &indice);
                    getchar(); // limpa buffer

                    if(indice < 0 || indice >= quantidade) {
                        printf("\nIndice invalido!");
                    } else {
                        // Remove o aluno
                        for(i = indice; i < quantidade - 1; i++) {
                            alunos[i] = alunos[i + 1];
                        }
                        quantidade--;
                        printf("\nAluno removido com sucesso");
                    }
                }
                break;

            case 0:
                printf("\n Programa encerrado");
                break;

            default:
                printf("\n Opcao invalida \n");
                printf("\n");
        }

    } while(opcao != 0);

    return 0;
}
