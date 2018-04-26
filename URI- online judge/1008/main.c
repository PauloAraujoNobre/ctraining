#include <stdio.h>
 
int main() {
 
    int n, h;
    double sh;
    
    scanf("%d %d %lf", &n, &h, &sh);
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2lf\n", h * sh);
 
    return 0;
}
