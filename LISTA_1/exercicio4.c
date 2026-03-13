#include <stdio.h>

int main(){
    
    int vetor[8];
    int i;
    int x;
    int y;
    int soma;
    
    for(i = 0; i < 8; i++){
        printf("Digite os valores do vetor: ");
        scanf("%i", &vetor[i]);
        
    }
    
    printf("Escolha a primeira posicao do vetor: ");
    scanf("%i", &x);
    
    printf("Escolha a segunda posicao do vetor: ");
    scanf("%i", &y);
    
    soma = vetor[x] + vetor[y];
    
    printf("soma dos valores eh: %i", soma);
    
    return 0;
}
