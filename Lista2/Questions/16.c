#include<stdio.h>

double fat(double N);

int main(){
    double i, expressao = 0;

    for(i = 1; i <= 5; i++){
        expressao += i / fat(i * 2);

    }

    printf("S = %.15lf\n", expressao);

    return 0;
}

double fat(double N){

    double fatFunc = 1;

    for( ; N > 0; N--){

        fatFunc *= N;
    }
    return fatFunc;

}
