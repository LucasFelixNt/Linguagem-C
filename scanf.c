#include <stdio.h>
#include <stdlib.h>

int main(void){

	char conceito;
	float nota;
	int num;

	printf("Informe o conceito do aluno: \n");
	scanf("%c", &conceito);

	printf("Informe a nota do aluno: \n");
	scanf("%f", &nota);

	printf("Informe a matricula do aluno: \n");
	scanf("%d", &num);

	system(pause);
	return(0);
	
}