#include<stdio.h>

int main(){
  
    int op;
    double ms, km;
    
    while(op < 1 || op > 2){

        printf("Selecione uma das opções abaixo para realizar a conversão\n");
        printf("1 - De m/s para km/h\n");
        printf("2 - De km/h para m/s \n");
        scanf("%d", &op);

        switch(op){
            case 1:
                printf("Digite o valor \n");
                scanf("%lf", &ms); 
                printf("A velocidade %.2lfm/s em km/h é: %.2lf\n", ms, ms*3.6); 
                break;
            case 2:
                printf("Digite o valor\n");
                scanf("%lf", &km);
                printf("A velocidade %.2lfkm/h em m/s é: %.2lf\n", km, km/3.6); 
                break;
            default:
                printf("Opção inválida\n");
                break;
        }
    }

    return 0;
}
