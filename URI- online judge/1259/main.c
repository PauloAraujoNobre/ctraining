#include <stdio.h>
#define TAM 100001

void quick(int vet[], int esq, int dir){

      int pivo = esq, i,ch,j;

      for(i=esq+1;i<=dir;i++){
          j = i;

          if(vet[j] < vet[pivo]){
              ch = vet[j];

              while(j > pivo){
                  vet[j] = vet[j-1];
                  j--;
              }
              vet[j] = ch;
              pivo++;
          }
      }
      if(pivo-1 >= esq){
          quick(vet,esq,pivo-1);
      }

      if(pivo+1 <= dir){
          quick(vet,pivo+1,dir);
      }
 }

 int main () {
      int N;
      int nPar [TAM], nImpar [TAM], numeros, countPar = 0, countImpar = 0, i;

      scanf ("%d", &N);

      for(N; N >= 1; N-- ){
            scanf("%d", &numeros);
            if(numeros % 2 == 0){
                nPar[countPar] = numeros;
                countPar++;
            }else{
                nImpar[countImpar] = numeros;
                countImpar++;
            }
      }

      quick(nPar, 0, countPar - 1);
      quick(nImpar, 0, countImpar - 1);

      for(i = 0; i < countPar; i++){
          printf("%d\n", nPar[i]);
      }
      for(i = countImpar - 1; i >= 0; i--){
          printf("%d\n", nImpar[i]);
      }

      return 0;
 }
