#include<stdio.h>
#define TAM 20000
int main()
{
    int i,j[TAM] = {0 ,0 ,1};
    int count = 0;

    printf("Digite um inteiro.\n");
    scanf("%d",&i);

    int aux;
    int aux2;
    int a,b = 0;

    for(aux = 3;aux < TAM;aux++){
        j[aux] = 1;
        for (a = 2; a < aux;a++){

            if (aux%a == 0 && aux != a){
                j[aux] = 0;
                break;  
            }
        }
    }
    int k = 0, aux = 0, aux2 = 0;
    
    while(aux < TAM && aux2 != i){
   
        if (j[aux] == 1){
            count += aux;
            aux2++;
        }
        aux++;

    }

    printf("A soma dos %d primeiros numeros primos eh %d.\n",i,count );
    
    return 0;
}
