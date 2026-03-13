#include <stdio.h>

int main(){
    
    int vetor[10];
    int i;
    int maior;
    int menor;
    
    for(i = 0; i < 10; i++){
        printf("Insira os 10 valores do vetor: ");
        scanf("%i", &vetor[i]);
        
    }
    
    maior = vetor[0];
    menor = vetor[0];
    
    for(i = 1; i < 10; i++){
        
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    
    printf("O maior valor eh: %i\n", maior);
    printf("O menor valor eh: %i\n", menor);
    
    return 0;
    
}
    
