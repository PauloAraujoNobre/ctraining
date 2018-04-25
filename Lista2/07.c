#include<stdio.h>

int main(){

    int i, count = 0;
    int v[10];

    printf("Digite 10 números para efetuar a soma\n");

    for(i = 0; i < 10; i++){
    
      scanf("%d", &v[i]);
      count = count + v[i]; 

    }

    printf("Soma = %d\n", count);

    return 0;
  }
