#include <stdio.h>

int main(){

    int vet[5];
    int maior = 0;
    int menor = 0;
    int somatoria = 0;

    printf("Escreva 5 valores:\n\n");

    //entrada
    for(int i=0; i<5; i++){
        printf("n%d: ",i+1);
        scanf("%d",&vet[i]);
    }

    for(int i=0; i<5; i++){
        maior = -1000000;

        if(vet[i]>maior) maior = vet[i];
    }

    for(int i=0; i<5; i++){
        menor = 1000000;

        if(vet[i]<menor) menor = vet[i];
    }
    

    for(int i=0; i<5; i++){
        somatoria += vet[i];

    }


    printf("______________________\n\tVETOR:\n     ");
    for(int i=0; i<5; i++){
        printf("%i ",vet[i]);
    }

    printf("\nMedia: %d\n",(somatoria/5));
    printf("Menor: %d\n",menor);
    printf("Maior:%d\n",maior);
    printf("_______________________");
    
    return 0;
}
