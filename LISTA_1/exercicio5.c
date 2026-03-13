#include <stdio.h>

int main(){
    
    int vetor[10];
    int i;
    int contador = 0;
    
    for(i = 0; i < 10; i++){
        printf("Insira 10 valores para o vetor: ");
        scanf("%i", &vetor[i]);
    }    
    
    for(i = 0; i < 10; i++){
        if (vetor[i] % 2 == 0){
        contador++;
        }
    }
    
    printf("A quantidade de numeros pares eh: %i", contador);
    
    return 0;
}
