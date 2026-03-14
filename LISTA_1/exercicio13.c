#include <stdio.h>

int main() {
    int v[5];
    int i;
    int maior, menor;
    int pmaior = 0, pmenor = 0;

    for(i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    maior = v[0];
    menor = v[0];

    for(i = 1; i < 5; i++) {
        if(v[i] > maior) {
            maior = v[i];
            pmaior = i;
        }

        if(v[i] < menor) {
            menor = v[i];
            pmenor = i;
        }
    }

    printf("Maior valor: %d na posicao %d\n", maior, pmaior);
    printf("Menor valor: %d na posicao %d\n", menor, pmenor);

    return 0;
}
