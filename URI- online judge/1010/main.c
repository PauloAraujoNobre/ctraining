#include <stdio.h>
 
int main() {
 
    int i, codigo, quantidade;
    double valor;
    double total = 0;
    
    for(i = 0; i < 2; i++){
        scanf("%d %d %lf", &codigo, &quantidade, &valor);
        total += quantidade * valor;
    }
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}
