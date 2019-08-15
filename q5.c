#include <stdio.h>
#include <stdlib.h>

/* q5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui. */

int main(){
    int vetor[10];
    int i;
    int contador = 0;

    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for(i=0; i<10; i++){
       if(vetor[i]%2==0){
            contador = contador + 1;
       }
    }
    printf("Vetor[10]: ");
    for(i=0; i<10; i++){
        printf("%d\ ", vetor[i]);
    }
    printf("\n");
    if(contador != 0){
        printf("Ele possui %d valores pares. ", contador);
    }
    else{
         printf("Ele nao possui valores pares. ");
    }

    return 0;
}
