#include<stdio.h>
#define TAM 100000

int main(){

    int i, N, n, maior = 0;
    int count[TAM];

    printf("Digite a quantidade de Nºs desejada\n");
    scanf("%d", &N);
    printf("Digite %d números\n", N);

    for(n = 0; n < TAM; n++){
        count[n] = 0;
    }

    while(N > 0){
        scanf("%d", &n);
        if(n > maior){
          maior = n;
        }	

        count[n]++;
        N--;
    }

    printf("%d aparece %d vez(es)\n", maior, count[maior]);

    return 0;
}
