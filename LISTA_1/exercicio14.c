#include <stdio.h>

int main() {
    int num, i;
    int somaPares = 0;
    int qtdImpares = 0;

    printf("Digite 6 numeros inteiros:\n");

    for(i = 1; i <= 6; i++) {
        scanf("%d", &num);

        if(num % 2 == 0) {
            printf("Par: %d\n", num);
            somaPares += num;
        } else {
            printf("Impar: %d\n", num);
            qtdImpares++;
        }
    }

    printf("\nSoma dos numeros pares: %d\n", somaPares);
    printf("Quantidade de numeros impares: %d\n", qtdImpares);

    return 0;
}
