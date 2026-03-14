#include <stdio.h>

int existe(int v[], int tamanho, int valor){
    for(int i=0;i<tamanho;i++){
        if(v[i]==valor) return 1;
    }
    return 0;
}

int main(){
    int v1[10], v2[10], uniao[20];
    int i, k=0;

    printf("Digite 10 valores para o vetor 1:\n");
    for(i=0;i<10;i++){
        scanf("%d",&v1[i]);
        if(!existe(uniao,k,v1[i])){
            uniao[k++]=v1[i];
        }
    }

    printf("Digite 10 valores para o vetor 2:\n");
    for(i=0;i<10;i++){
        scanf("%d",&v2[i]);
        if(!existe(uniao,k,v2[i])){
            uniao[k++]=v2[i];
        }
    }

    printf("Uniao dos vetores:\n");
    for(i=0;i<k;i++){
        printf("%d ",uniao[i]);
    }

    return 0;
}
