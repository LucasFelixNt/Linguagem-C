#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

	char nome[15], nome2[15];

	printf("Digite seu nome: \n");
	scanf("%s", &nome);

	fflush(stdin);
	printf("Digite seu nome: \n");
	fgets(nome2, 15, stdin);

	system(pause);
	return(0);
	
}