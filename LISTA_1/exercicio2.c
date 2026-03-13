#include <stdio.h>

int main(){
    
    int vetor [6];
    int i;
    
    for(i = 0; i < 6; i++){
       printf("Digite os valores do vetor:  ", i);
       scanf("%i", &vetor[i]);
    } 
    
    for(i = 0; i < 6; i++){
        printf("[%i]\n", vetor[i]);
    }
    
    return 0;
}
