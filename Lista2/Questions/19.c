#include<stdio.h>

int main(){

    float chico = 1.50, ze = 1.10; 
    int count = 0;


    for(ze; chico > ze; ze = ze + 0.03, chico = chico + 0.02){
        count++;
    }

    printf("Serão necessários %d anos p/ Zé se tornar maior que Chico\n", count);

    return 0;
}
