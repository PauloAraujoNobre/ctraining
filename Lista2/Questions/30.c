#include<stdio.h>

int maior(int a, int b);

int main(){
    int a, b;

    printf("Digite dois números para saber qual o maior\n");
    scanf("%d %d", &a, &b);

    printf("O maior é = %d\n", maior(a,b));

    return 0;
}

int maior(int a, int b){

    int maior;

    if(a > b){
        maior = a;
    }
    if(b > a){
       maior = b;
    }

    return maior;
}
