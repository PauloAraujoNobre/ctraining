#include<stdio.h>
int dia, m, ano;

void data(int m);

int main(){

    printf("Digite a data atual no formato dd/mm/aa em números\n");
    scanf("%d %d %d", &dia, &m, &ano);

    data(m);


    return 0;
}
	
void data(int m){

    char strMes[30];

    if(m == 1){
      printf("%d de Janeiro de %d\n", dia, ano);

    }else if(m == 2){
      printf("%d de Fevereiro de %d\n", dia, ano);

    }else if(m == 3){
      printf("%d de Março de %d\n", dia, ano);

    }else if(m == 4){
      printf("%d de Abril de %d\n", dia, ano);

    }else if(m == 5){
      printf("%d de Maio de %d\n", dia, ano);

    }else if(m == 6){
      printf("%d de Junho de %d\n", dia, ano);

    }else if(m == 7){
      printf("%d de Julho de %d\n", dia, ano);

    }else if(m == 8){
      printf("%d de Agosto de %d\n", dia, ano);

    }else if(m == 9){
      printf("%d de Setembro de %d\n", dia, ano);

    }else if(m == 10){
      printf("%d de Outubro de %d\n", dia, ano);

    }else if(m == 11){
      printf("%d de Novembro de %d\n", dia, ano);

    }else if(m == 12){
      printf("%d de Dezembro de %d\n", dia, ano);
    }

}
