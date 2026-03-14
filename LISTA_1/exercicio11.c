#include <stdio.h>

int main(){

    float reais[10],somatoria = 0;
    int count,i;

    printf("Insira 10 numeros reais (com ponto, sem virgula):\n");

    for(i=0;i<10;i++){
        printf("Posicao n%d:",i+1);
        scanf("%f",&reais[i]);
    }

    for(i=0;i<10;i++){
        if(reais[i]<0){
            count++;
        }
    }
     for(i=0;i<10;i++){
        if(reais[i]>0){
            somatoria = somatoria + reais[i];
        }
    }

    printf("A quantidade de numeros negativos eh: %d\n",count);
    printf("A somatoria dos numeros positivos eh: %f",somatoria);

    return 0;
}
