#include <stdio.h>

int main(){
    
    int vetor[6];
    int i;
    
    for(i = 0; i < 6; i++){
        
        printf("Digite os valores do vetor: ");
        scanf("%i", &vetor[i]);
        
        if(vetor[i] % 2 != 0){
            printf("Numero invalido!\n");
            i--;
        }
    }
    
    for(i = 5; i >= 0; i--){
        printf("%i\n", vetor[i]);
    }   
    
    return 0;
    
}
