#include <stdio.h>
 
int main() {
 
    char name[100];
    double s, v;
    
    scanf("%s %lf %lf", name, &s, &v);
    printf("TOTAL = R$ %.2lf\n", s + v * 0.15);
 
    return 0;
}
