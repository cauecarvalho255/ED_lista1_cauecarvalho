#include <stdio.h>

int main(){
    int a[5], y[5];
    int soma[5], produto[5];
    int i,j;

    printf("Digite 5 valores para o vetor A:\n");
    for(i=0;i<5;i++) scanf("%d",&a[i]);

    printf("Digite 5 valores para o vetor Y:\n");
    for(i=0;i<5;i++) scanf("%d",&y[i]);

    printf("\nSoma:\n");
    for(i=0;i<5;i++){
        soma[i]=a[i]+y[i];
        printf("%d ",soma[i]);
    }

    printf("\nProduto:\n");
    for(i=0;i<5;i++){
        produto[i]=a[i]*y[i];
        printf("%d ",produto[i]);
    }

    printf("\nDiferenca (A que nao estao em Y):\n");
    for(i=0;i<5;i++){
        int existe=0;
        for(j=0;j<5;j++){
            if(a[i]==y[j]){
                existe=1;
                break;
            }
        }
        if(!existe) printf("%d ",a[i]);
    }

    printf("\nInterseccao:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i]==y[j]){
                printf("%d ",a[i]);
                break;
            }
        }
    }

    printf("\nUniao:\n");
    for(i=0;i<5;i++) printf("%d ",a[i]);

    for(i=0;i<5;i++){
        int existe=0;
        for(j=0;j<5;j++){
            if(y[i]==a[j]){
                existe=1;
                break;
            }
        }
        if(!existe) printf("%d ",y[i]);
    }

    return 0;
}
