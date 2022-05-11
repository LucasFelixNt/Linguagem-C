#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

	float nota, nota2, media;

	printf("Digite a primeira nota: \n");
	scanf("%f", &nota);

	printf("Digite a segunda nota: \n");
	scanf("%d", &nota2);

	media = (nota + nota2) / 2;

	printf("Media = %d \n", &media);

	system(pause);
	return(0);
	
}