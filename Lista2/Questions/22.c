#include<stdio.h>

int main(){

    int i, j, n, count = 1;

    printf("Digite um número inteiro positivo.\n");
    scanf("%d", &n);

    for(i = 1; i < n + 1; i++){

        for(j = 1; j < i + 1; j++){
            printf("%d  ", count++);

        }

        printf("\n");
    }

    return 0;
}
