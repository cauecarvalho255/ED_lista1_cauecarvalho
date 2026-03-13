#include <stdio.h>

int main(){
    
    int vetor[6];
    int i;
    
    for(i = 0; i < 6; i++){
        printf("Insira os valores do vetor: ");
        scanf("%i", &vetor[i]);
    }
    
    printf("Valores na ordem inversa");
    
    for(i = 6; i >= 0; i--){
        printf("%i\n", vetor[i]);
    }
    
    return 0;
}
