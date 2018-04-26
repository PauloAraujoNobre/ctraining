#include <stdio.h>
 
int main() {
 
    int tempo, ano, mes, dia;
    
    scanf("%d", &tempo);
    
    ano = tempo / 365;
    mes = tempo % 365 / 30;
    dia = tempo % 365 % 30;
    
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
 
    return 0;
}
