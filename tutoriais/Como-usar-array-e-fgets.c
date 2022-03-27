#include<stdio.h>

int main(){
    char nome[5][40];
    int i;

    for(i=0; i<5; i++){
        printf("\nNome do aluno %d: ", i+1);
        fgets(nome[i], 40, stdin);
    }
    for(i=0; i<5; i++){
        printf("\nNome do aluno %d e %s", i+1, nome[i]);
    }

    return 0;
}