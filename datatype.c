#include <stdio.h>
#include <stdlib.h>

int main(void){

	char letra;
	int x;
	float valor;	

	letra =	'a';
	x = 10;
	valor = 3500.50;

	printf("%c\n",letra);
	printf("%d\n", x);
	printf("%.2f\n", valor);

	system(pause);
	return(0);
	
}