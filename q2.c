#include <stdio.h>
#include <stdlib.h>

/* q2. Faça um programa que leia um vetor de 8 posições e, em seguida, 
leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. 
Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.*/

int main(){
    int vetor[8];
    int x;
    int y;
    int i;
    int soma = 0;
    int valx;
    int valy;

    for(i=0; i<8; i++){
        printf("Digite um inteiro: \n");
        scanf("%d", &vetor[i]);
        }
    printf("Vetor[8]: \n");
    for(i=0; i<8; i++){
        printf("%d\ ", vetor[i]);
    }
    printf("\n");
    printf("Digite um valor entre 0 e 7 para x: \n");
    scanf("%d", &x);
    printf("Digite um valor entre 0 e 7 para x: \n");
    scanf("%d", &y);

    for(i=0; i<8; i++){
            valx = vetor[x];
            valy = vetor[y];
            soma = valx + valy;
        }
    printf("Soma: %d", soma);

    return 0;
}
