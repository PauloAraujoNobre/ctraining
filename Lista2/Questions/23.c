#include<stdio.h>
int main(){

    int i, N, count = 0;

    printf("Digite um número inteiro maior que 1 para saber se é primo\n");
    scanf("%d", &N);

    for(i = 1; i <= N; i++){

        if(N % i == 0){
           count++;
        }
    }

    if(count == 2){

       printf("O número %d é primo\n", N);
    }else{

        printf("O número %d não é primo\n", N);
    }	

    return 0;
}
