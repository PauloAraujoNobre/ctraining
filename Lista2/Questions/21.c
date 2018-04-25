#include<stdio.h>

int main(){

    int valor;
    int cemr, cinquentar, vinter, dezr, cincor, doisr, umr = 0;

    printf("Digite um valor de até 1000000 de reais para decompor o valor\n");
    scanf("%d", &valor);

    cemr = valor / 100;
    cinquentar = valor % 100 / 50;
    vinter = (valor % 100) % 50 / 20;
    dezr = valor % 100 % 50 % 20 / 10;
    cincor = valor % 100 % 50 % 20 % 10 / 5;
    doisr = valor % 100 % 50 % 20 % 10 % 5 / 2;
    umr = valor % 100 % 50 % 20 % 10 % 5 % 2 / 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cemr);
    printf("%d nota(s) de R$ 50.00\n", cinquentar);
    printf("%d nota(s) de R$ 20.00\n", vinter);
    printf("%d nota(s) de R$ 10.00\n", dezr);
    printf("%d nota(s) de R$ 5.00\n", cincor);
    printf("%d nota(s) de R$ 2.00\n", doisr);
    printf("%d nota(s) de R$ 1.00\n", umr);

    return 0;
}
