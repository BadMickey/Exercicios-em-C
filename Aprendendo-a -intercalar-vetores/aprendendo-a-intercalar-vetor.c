#include<stdio.h>

void mostrar(int v[], int n);
void intercalar(int v1[],int n1, int v2[], int n2, int v3[], int n3);

int main(){
    int v1[5] = {1,3,5,7,9};
    int v2[5] = {2,4,6,8,10};
    int v3[10];
    intercalar(v1, 5, v2, 5, v3, 10);
    mostrar(v3, 10);
}

void intercalar(int v1[],int n1, int v2[], int n2, int v3[], int n3){
    int j=0;
    for(int i=0; i<n3 && j<n1 && j<n2;i+=2)
    {
        v3[i]=v1[j];
        v3[i+1]=v2[j];
        j++;
    }
}

void mostrar(int v[], int n){
    for(int i=0; i<n; i++)
    {
        printf(" %d", v[i]);
    }
    printf("\n");
}