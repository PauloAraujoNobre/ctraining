#include<stdio.h>

int dobro(int N);
int main(){

    int N;

    printf("Digite um número inteiro\n");
    scanf("%d", &N);

    printf("%d\n", dobro(N));

    return 0;
}

int dobro(int N){

	  return N * 2;
}
