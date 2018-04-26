#include <stdio.h>
#define TAM 50

int main(){

    int i, j, N, aux, countTroca, count, count1 = 1;
    int cartas[TAM], cartasDescartadas[TAM];


    scanf("%d", &N);

    while(N != 0){

       for(i = 0; i < TAM; i++){
           cartas[i] = 0;
           cartasDescartadas[i] = 0;
       }

       for(i = N, j = 0; i > 0; i--, j++){
           cartas[j] = i;
       }
       countTroca = 0;

       while(count1 < N){
           count = 1;
           cartasDescartadas[countTroca] = cartas[N - count];
           aux = cartas[N - count - 1];
        
           while(N > count){
             count++;
             cartas[N - count] = cartas[N - count - 1];
           }
        
           cartas[0] = aux;
              countTroca++;
           N--;
       }

       printf("Discarded cards: %d", cartasDescartadas[0]);

       for(i = 1; cartasDescartadas[i] != 0; i++){
              printf(", %d", cartasDescartadas[i]);
       }

           printf("\n");
           printf("Remaining card: %d\n", cartas[0]);

       scanf("%d", &N);
    }

    return 0;
}
