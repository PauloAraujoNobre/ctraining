#include<stdio.h>
int main(){
    int a, b, maior = 0;
    int produto, aux1 = 0, aux2;

    for(a = 100; a < 999; a++){

        for(b = 100 ; b < 999; b++){

            aux1 = 0;
            produto = a * b;
            aux2 = produto;

            while(produto > 0){
                aux1 = aux1 * 10 + produto % 10;
                produto = produto / 10;

            }
            if(aux1 == aux2){
                if(aux1 >= maior){
                    maior = aux2;
                }
            }
        }
    }

    printf("O maior palíndromo da multiplicação entre 3 números é %d\n", maior);

    return 0;
}
