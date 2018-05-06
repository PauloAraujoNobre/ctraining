#include <stdio.h>

int main(){

    int i, j, aux;
    double n[3], A, B, C;

    for(i = 0; i < 3; i++){
       scanf("%lf", &n[i]);
    }

    for(i = 0; i < 3; i++){

        for(j = i + 1; j < 3; j++){
            if(n[i] < n[j]){		
              aux = n[i];
              n[i] = n[j];
              n[j] = aux;
            }
        }
    }

    A = n[0];
    B = n[1];
    C = n[2];

    if(A >= B + C){
        printf("NAO FORMA TRIANGULO\n");

    }else{
        if(A * A == B * B + C * C){
            printf("TRIANGULO RETANGULO\n");

        }else if(A * A > B * B + C * C){
            printf("TRIANGULO OBTUSANGULO\n");

        }else{
            printf("TRIANGULO ACUTANGULO\n");

        }
        if(A == B && B == C){
            printf("TRIANGULO EQUILATERO\n");

        }else if(A == B || B == C){
            printf("TRIANGULO ISOSCELES\n");

        }
    }

    return 0;
}
