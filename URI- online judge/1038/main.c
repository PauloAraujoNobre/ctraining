#include<stdio.h>
int main(){
    int cod, quant;
    double preco[] = {4, 4.5, 5, 2, 1.5};

    scanf("%d %d", &cod, &quant);

    printf("Total: R$ %.2lf\n", preco[cod - 1] * quant);

    return 0;
}
