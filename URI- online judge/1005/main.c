#include <stdio.h>
 
int main() {
 
    double a, b;

    scanf("%lf %lf", &a, &b);
    double MEDIA = (a * 3.5 + b * 7.5) / 11.0; 
    printf("MEDIA = %.5f\n", MEDIA);
 
    return 0;
}
