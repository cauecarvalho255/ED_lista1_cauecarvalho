#include <stdio.h>

int main(){
    
    float vetor[15];
    int i;
    float soma = 0;
    float media;
    
    for(i = 0; i < 15; i++){
        printf("Insira as notas: ");
        scanf("%f", &vetor[i]);
    }
    
    for(i = 0; i < 15; i++){
        soma = soma + vetor[i];
    }   
    
    media = soma / 15;
    
    printf("A media das notas eh: %2.f", media);
    
    return 0;
}
    
