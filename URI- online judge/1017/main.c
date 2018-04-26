#include <stdio.h>
 
int main() {
 
    double tempo, velocidadeMedia;
    
    scanf("%lf %lf", &tempo, &velocidadeMedia);
    printf("%.3lf\n", tempo * velocidadeMedia / 12);
    
    return 0;
}
