#include <stdio.h>

int main() {

	float vetorA [10];
	float vetorB [10];
	int i;


	for(i = 0; i < 10; i++) {
		printf("Digite os valores do vetor: ");
		scanf("%f", &vetorA[i]);
	}

	for(i = 0; i < 10; i++) {
		vetorB[i] = vetorA[i] * vetorA[i];
	}

	printf("Valores do VETOR A\n");

	for(i = 0; i < 10; i++) {
		printf("%2.f \n", vetorA[i]);
	}

	printf("Valores do VETOR B\n");

	for(i = 0; i < 10; i++) {
		printf("%2.f \n", vetorB[i]);
	}


	return 0;
}
