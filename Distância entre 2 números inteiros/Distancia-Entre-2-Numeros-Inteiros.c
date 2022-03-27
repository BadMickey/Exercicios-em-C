#include<stdio.h>

void main(){
    int i, num, soma=0;

    printf("Valor inicial: ");
    scanf("%i",&i);
    printf("\nValor final: ");
    scanf("%i",&num);
    if(num>=0){
        while(i<=num){
            soma = soma + i;
            i++;
        }
        printf("%i", soma);
    }else{
        while(i>=num){
            soma = soma - (-i);
            i--;
        }
        printf("\n%i", soma);
    }
}