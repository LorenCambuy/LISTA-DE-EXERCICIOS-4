#include <stdio.h>

// Criando a struct Aluno para guardar nome, idade e nota
struct Aluno {
    char nome[50];  
    int idade;     
    float nota;     
};

int main() {

    // Criando uma variável ALUNO1 do tipo struct Aluno e inicializando com valores;
    struct Aluno aluno1 = {"Loren", 19, 10.5};

    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota: %.2f\n", aluno1.nota);

    return 0;
}
