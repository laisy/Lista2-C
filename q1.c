#include <stdio.h>
#include <stdlib.h>

/* q1. Construa um algoritmo que cria um array (vetor) de 100 inteiros. 
Esse array deve ser preenchido com os �ndices de cada posi��o + 1, 
ou seja, A[0] conter� o valor 1, A[1] o valor 2, e assim por diante.*/

int main(){
    int vetor[100];
    int i;

    for(i=0; i<100; i++){
        vetor[i] = i + 1;
    }
    for(i=0; i<100; i++){
        printf("%d\n", vetor[i]);
    }
    return 0;
}