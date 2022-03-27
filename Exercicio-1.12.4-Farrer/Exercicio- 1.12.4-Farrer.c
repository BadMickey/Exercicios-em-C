#include<stdio.h>
#include<string.h>

int main(){
    char nome[10000][40];
    char stop;
    double valCompra[10000], valVenda[10000];
    double lucro[10000];
    int cont=0, cont_10=0, cont_10_a_20=0, cont_mais_de_20=0;

    printf("Entrada de Dados:\n");
    while(stop!='n'&&stop!='N'){
        printf("\n\nDigite o nome do produto: ");
        fgets( nome[cont], 40, stdin);
        printf("\nValor de compra: R$");
        scanf("%lf",&valCompra[cont]);
        fflush(stdin);
        printf("\nValor de venda: R$");
        scanf("%lf",&valVenda[cont]);
        fflush(stdin);
        printf("\nDeseja continuar(s/n): ");
        scanf("%c",&stop);
        fflush(stdin);
        lucro[cont]=valVenda[cont]-valCompra[cont];
        cont+=1;  
    }

    int i=0;
    for(i=0;i<cont;i++){
        if(valVenda[i]<1.1*valCompra[i]){
            cont_10+=1;
        }
    }
    for(i=0;i<cont;i++){
        if(valVenda[i]>=1.1*valCompra[i]&&valVenda[i]<=1.2*valCompra[i]){
            cont_10_a_20+=1;
        }
    }for(i=0;i<cont;i++){
        if(valVenda[i]>1.2*valCompra[i]){
            cont_mais_de_20+=1;
        }
    }

    printf("\n\n\nSaida de Dados:");
    for(i=0;i<cont;i++){
        printf("\n\nNome do produto %d: %s", i+1, nome[i]);
        printf("Valor de compra do produto %d: R$%.2lf", i+1, valCompra[i]);
        /*    Tirei o \n do printf anterior porque ele estava quebrando linha
        sozinho     */
        printf("\nValor de venda do produto %d: R$%.2lf", i+1, valVenda[i]);
        printf("\nTeve %.2lf reais de lucro", lucro[i]);
    }
    printf("\n\nProdutos com menos de 10%% de lucro: %d", cont_10);
    printf("\n\nProdutos entre 10 e 20%% de lucro: %d", cont_10_a_20);
    printf("\n\nProdutos com menos de 10%% de lucro: %d", cont_mais_de_20);

    return 0;
}