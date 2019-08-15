#include <stdio.h>
#include <stdlib.h>

/* q3. Fazer um programa em "C" que lê um conjunto de 10 valores inteiros e 
verifica se algum dos valores é igual a média dos mesmos */

int main(){
    int conjunto[10];
    int i;
    int soma = 0;
    int x;

    for(i=0; i<10; i++){
        printf("Digite um inteiro: ");
        scanf("%d", &conjunto[i]);
    }
    printf("Inteiros digitados: \n");
    for(i=0; i<10; i++){
        printf("%d\ ", conjunto[i]);
    }
    for(i=0; i<10; i++){
        x = conjunto[i];
        soma = soma + x;
    }
    float media;
    media =(float) soma/10;

    printf("\n");
    printf("Media: %0.2f\ ", media);
    printf("\n");
    for(i=0; i<10; i++){
        if(conjunto[i] == media){
            printf("O inteiro %d e igual a media!\n", conjunto[i]);
        }
    }

    return 0;
}
