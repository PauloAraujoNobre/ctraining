#include<stdio.h>

int main(){

    int i, count = 0;
    char ch;

    printf("Digite um char para saber quantos bits iguais a \"0\" ele possui\n");
    scanf("%c", &ch);

    for(i = 0; i < (sizeof(char) * 8); i++){
        if((ch & 1) % 2 == 0){
          count++;
        }
          ch = ch >> 1;
    }

    printf("O char possui %d bits iguais a \"0\"\n", count);

    return 0;
}
