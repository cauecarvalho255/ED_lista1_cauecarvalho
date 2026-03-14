#include <stdio.h>

int main() {
    int v1[10], v2[10];
    int intersecao[10];
    int i, j, k = 0;
    int repetido;

    printf("Digite 10 valores para o vetor 1:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite 10 valores para o vetor 2:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &v2[i]);
    }

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            if(v1[i] == v2[j]) {

                repetido = 0;

                for(int m = 0; m < k; m++) {
                    if(intersecao[m] == v1[i]) {
                        repetido = 1;
                        break;
                    }
                }

                if(!repetido) {
                    intersecao[k] = v1[i];
                    k++;
                }
            }
        }
    }

    printf("\nInterseccao dos vetores:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", intersecao[i]);
    }

    return 0;
}
