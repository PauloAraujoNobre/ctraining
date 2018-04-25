#include<stdio.h>
#define TAM 10

int main(){

    int i, maior = 0, menor = 0;
    int n[TAM];

    printf("Digite 10 números para saber o maior e o menor\n");

    for(i = 0; i < TAM; i++){
        scanf("%d", &n[i]);
        
        if(n[i] > maior){
          maior = n[i];
        }
        
        if(n[i] < menor || menor == 0){
          menor = n[i];
        }
    }

    printf("Menor valor = %d\n", menor);
    printf("Maior valor = %d\n", maior);

    return 0;
}
