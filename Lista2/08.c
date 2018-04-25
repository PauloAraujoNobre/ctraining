#include<stdio.h>

int main(){

    int i;
    int n[10];
    float soma;

    printf("Digite 10 números para saber a média\n");
    
    for(i = 0; i < 10; i++){
      scanf("%d", &n[i]);
    }

    for(i = 0; i < 10; i++){
      soma += n[i];
    }

    printf("Média aritmética = %.2f\n", soma / 10.0);

    return 0;
}
