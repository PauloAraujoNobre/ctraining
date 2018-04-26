#include <stdio.h>
#include <string.h>

int main(){

    char frase[2500];
    int ord[2][50];
    int i, j, tamanho, a, N, aux1, aux2;

    scanf("%d", &N);
    getchar();

    for(N; N > 0; N--){
         gets(frase);
         tamanho = strlen(frase);
         ord[0][0] = 0;

         for(i = 0, j = 1, a = 0; i < tamanho; i++, j++){
              if(frase[i] == ' ' || frase[i] == '\0'){
                 ord[1][a] = j - 1;
                 a++;
                 ord[0][a] = i + 1;
                 j = 0;
              }
        }

        if(j > 1){
            ord[1][a] = j - 1;
        }

        for(i = 1; i <= a; i++) {
              aux1 = ord[1][i];
              aux2 = ord[0][i];
              j = i - 1;

        while(j >= 0 && ord[1] [j] < aux1) {
            ord[1][j+1] = ord[1][j];
            ord[0][j+1] = ord[0][j];
            j--;
        }

          ord[1][j+1] = aux1;
          ord[0][j+1] = aux2;
      }

      for(i = 0; i <= a; i++){

        for(j = ord[0][i]; j < ord[0][i] + ord[1][i]; j++){
            printf ("%c", frase[j]);
        }

        if(i != a){
            printf(" ");
        }
      }
      printf("\n");

    }

    return 0;
}
