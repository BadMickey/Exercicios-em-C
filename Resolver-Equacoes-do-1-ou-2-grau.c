#include <stdio.h>
#include <math.h>

int main(){
    int grauEquacao;

    printf("Escolha:\n1 - Equacao do 1 Grau\n2 - Equacao do 2 Grau\n");
    scanf("%i",&grauEquacao);

    float a, b, c,delt, x,x1, x2, y;
    char var;
    if(grauEquacao==1){
        printf("\n\nDigite o valor de a:");
        scanf("%f",&a);
        printf("\nDigite o valor de b:");
        scanf("%f",&b);
        printf("\nVoce quer descobrir o valor de X ou Y?");
        scanf("%s",&var);
        if(var=='y'||var=='Y'){
            printf("\nDigite o valor de x:");
            scanf("%f",&x);
            y = a * x + b;
            printf("\nY = %.2f", y);
        }else if(var=='x'||var=='X'){
            printf("\nDigite o valor de y:");
            scanf("%f",&y);
            x = (y - b) / a;
            printf("\nX = %.2f", x);
        }else{
            printf("\n\nVariável não encontrada!");
            return;
        }
    }else if(grauEquacao==2){
            printf("\n\nDigite o valor de a:");
            scanf("%f",&a);
            printf("\nDigite o valor de b:");
            scanf("%f",&b);
            printf("\nDigite o valor de c:");
            scanf("%f",&c);
            printf("\nVoce quer descobrir o valor de X ou Y?");
            scanf("%s",&var);
            if(var=='y'||var=='Y'){
                printf("\nDigite o valor de x:");
                scanf("%f",&x);
                y = a*x*x + b*x +c;
                printf("\nY = %.2f", y);
            }else if(var=='x'||var=='X'){
                printf("\nDigite o valor de y:");
                scanf("%f",&y);
                delt = b*b - 4*a*c;
                if(delt<0){
                    printf("\n\nNão há raiz real, pois Delta é menor que 0!");
                    return;
                }else if(delt>0){
                    x1 = (-b + sqrt(delt)) / (2*a);
                    x2 = (-b - sqrt(delt)) / (2*a);
                    printf("\n\nx1= %.2f\nx2= %.2f", x1, x2);
                }else{
                    x = (-b + delt) / 2*a;
                    printf("\n\nx1= %.2f\nx2= %.2f", x1, x1);
                }
            }
        }else{
            printf("\n\nNão há esse tipo de equação no sistema!");
            return;
        }
    return 0;
}