#include<stdio.h>
int negativo(int a);

int main(){
    int N;

    printf("Digite um número inteiro\n");
    scanf("%d", &N);

    printf("%d\n", negativo(N));

    return 0;
}

int negativo(int a){
    if(a > 0){
       return 1;

    }else if(a < 0){
        return -1;

    }else{
        return 0;

    }
}
