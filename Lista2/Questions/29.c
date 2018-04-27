#include<stdio.h>
int segundos(int hr, int min, int seg);

int main(){
    int h, m, s;

    printf("Digite as horas, minutos e segundos para converter tudo em segundos\n");
    scanf("%d %d %d", &h, &m, &s);

    printf("O tempo em segundos é = %d\n", segundos(h, m, s));


    return 0;
}

int segundos(int hr, int min, int seg){

    hr *= 3600;
    min *= 60;
    seg += hr + min;

    return seg;
}
