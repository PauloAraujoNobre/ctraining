#include<stdio.h>
#define TAM 2001

int main(){

    int i, quant, n, count[TAM];

    scanf("%d", &i);

    for(n = 0; n < TAM; n++){
      count[n] = 0;
    }

    while(i > 0){
      scanf("%d", &n);
      count[n]++;
      i--;
    }

    for(n = 1; n < TAM ; n++){
      if(count[n] > 0){
        printf("%d aparece %d vez(es)\n", n, count[n]);
      }
    }

    return 0;
}
