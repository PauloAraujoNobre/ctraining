#include<stdio.h>

int main(){

    int n, centena, dezena, unidade;

    printf("Digite um número para o decompor\n");
    scanf("%d", &n);

    centena = n / 100;
    dezena = n % 100 / 10;
    unidade = n % 100 % 10;


    printf("%d centenas\n", centena);
    printf("%d dezenas\n", dezena);
    printf("%d unidades\n", unidade);

    return 0;
}
