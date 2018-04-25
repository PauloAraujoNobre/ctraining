#include<stdio.h>
#define TAM 10

int main(){

    int i;
    int n[TAM];
    float soma;

    printf("Digite 10 inteiros positivos\n");

    for(i = 0; i < TAM; i++){
        scanf("%d", &n[i]);
        if(n[i] < 0){
          printf("O número negativo não pôde ser lido, digite um positivo\n");
          i--;
        }
    }

    for(i = 0; i < 10; i++){
      soma += n[i];
    }

    printf("Média aritmética = %.2f\n", soma / 10.0);


    return 0;
}
