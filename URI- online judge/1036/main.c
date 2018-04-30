#include<stdio.h>
#include<math.h>	

double calcDelta(double A, double B, double C);

int main(){
    double A, B, C, delta, r1, r2;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (A <= 0) {
          printf("Impossivel calcular\n");
    }else{
          delta = calcDelta(A, B, C);

          if(delta < 0){
                printf("Impossivel calcular\n");
          }else{
                r1 = (- B + sqrt(delta)) / (2 * A);
                r2 = (- B - sqrt(delta)) / (2 * A);

                printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
          }
    }

    return 0;
}

double calcDelta(double A, double B, double C){
  	return B * B - 4 * A * C;
}
