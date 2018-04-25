#include<stdio.h>
#define TAM 101

int main(){

    int soma = 0, i;
    int n[TAM];

    for(i = 0; i < TAM; i++){
       n[i] = i;
    }

    for(i = 0; i < TAM; i = i + 2){
        soma += n[i];
    }

    printf("Soma dos primeiros 50 pares = %d\n", soma);

    return 0;
}
