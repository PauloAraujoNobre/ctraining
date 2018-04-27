#include<stdio.h>
int main(){
    int i;
    double salario = 2000, aumento;

    aumento = salario * 0.015;

    for(i = 1997; i < 2018; i++){
        salario += aumento;
        aumento *= 2;
    }
    
    printf("O salário dele em 2018 é: R$ %.2lf\n", salario);

    return 0;
}
