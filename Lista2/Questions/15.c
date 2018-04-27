#include<stdio.h>
int main(){
    double N, i, j;
    double count = 0, aux = 1, den = 1;

    printf("Digite um número inteiro N\n");
    scanf("%lf", &N);

    for(i = 1, aux = 1, den = 1; i <= N; i++){	

        for(j = 0; j < i; j++){
           den = den * ++aux;
        }

        count = count + 1 / den;

    }

    count += 1;

    printf("E = %.15lf\n", count);

    return 0;
}
