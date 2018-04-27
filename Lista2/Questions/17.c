#include<stdio.h> 
int fib(int N);

int main(){

    int i, N;

    printf("Digite um valor para N\n");
    scanf("%d", &N);

    for(i = 1; fib(i) <= N; i++){

        printf("%d ", fib(i));
    }

    printf("%d\n", fib(i));
    i++;

    return 0;
  }

int fib(int N){

    int i, ultimo = 1, fib = 0, penultimo = 1;

    if(N <= 2){
       return 1;

    }else{
        for(i = 3; i <= N; i++){

          fib = ultimo + penultimo;
          ultimo = penultimo;
          penultimo = fib;

        }
        return fib;
    }	
}
