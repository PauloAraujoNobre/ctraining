#include<stdio.h>

int main(){

	int a, b, c, d, aux;

	printf("Digite dois números para realizar a troca entre eles\n");
	scanf("%d %d", &a, &b);

	c = a;
	d = b;
		
	aux = a;
	a = a & 0;
	a = a | b;
	b = b & 0;
	b = b | aux;

	printf("Os números %d e %d se tornaram %d e %d\n", c, d, a, b);

	return 0;
}
