#include <stdio.h>

int  main(){
    
    int vetor[10];
    int i;
    int maior;
    int posicao;
    
    for(i = 0; i < 10; i++){
        printf("Insira os valores do vetor: ");
        scanf("%i", &vetor[i]);
    }
    
    maior = vetor[0];
    posicao = 0;
    
    for(i = 1; i < 10; i++){
        
        if(vetor[i] > maior){
        maior = vetor [i];
        posicao = i;
        }
    }   
    
    printf("O maior elemento eh: %i\n", maior);
    printf("Posicao do maior elemento eh: [%i]", posicao);
    
    return 0;
}
