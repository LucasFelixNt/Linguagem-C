#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

	int a, b, soma;

	printf("Digite um numero inteiro: \n");
	scanf("%d", &a);

	printf("Digite um outro numero inteiro: \n");
	scanf("%d", &b);

	soma = a + b;
	printf("Valor da soma = %d \n", soma);


	if (soma > 10)
	 {
	 	printf("O resultado e maior que 10.\n");

	 } 

	system(pause);
	return(0);
	
}