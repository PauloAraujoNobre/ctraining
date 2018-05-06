#include<stdio.h>

int main(){

    int M, N, soma;
    unsigned long long int N1 = 1, N2 = 1;


    while(scanf("%d %d", &M, &N) != EOF){

        for(M; 0 < M; M--){
            N1 *= M;
        }

        for(N; 0 < N; N--){
            N2 *= N;
        }

        printf("%llu\n", N1 + N2);

        N1 = 1;
        N2 = 1;
      }

    return 0;
}
