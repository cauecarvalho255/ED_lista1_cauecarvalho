#include <stdio.h>

int main(){
    int v[10];
    int i,j,existe;

    for(i=0;i<10;i++){
        do{
            printf("Digite um numero: ");
            scanf("%d",&v[i]);

            existe=0;
            for(j=0;j<i;j++){
                if(v[i]==v[j]){
                    printf("Numero repetido! Digite outro.\n");
                    existe=1;
                    break;
                }
            }
        }while(existe);
    }

    printf("Vetor final:\n");
    for(i=0;i<10;i++){
        printf("%d ",v[i]);
    }

    return 0;
}
