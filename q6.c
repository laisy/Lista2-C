#include <stdio.h>
#include <stdlib.h>

/* q6. Faça um programa que leia dois vetores de 10 elementos. 
Crie um vetor que seja a intersecção entre os 2 vetores anteriores, ou seja, 
que contém apenas os números que estão em ambos os vetores. Não deve conter números repetidos. */

int main(){
    int vetor1[10];
    int vetor2[10];
    int cont = 0;
    int vetorInt[cont];

    int i;
    int j;
    int k;
    int flag;

    printf("Digite os elementos do vetor 1: \n");
    for(i=0; i<10; i++){
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do vetor 2: \n");
     for(i=0; i<10; i++){
        scanf("%d", &vetor2[i]);
    }

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(vetor1[i] == vetor2[j]){
                flag = 0;
                for(k=0; k<cont; k++){
                        if(vetorInt[k] == vetor1[i]){
                                flag += 1;
                                break;
                        }

                    }
                if(flag == 0){
                    vetorInt[cont] = vetor1[i];
                     cont += 1;
                    }
                }
            }
     }


    printf("\n");
    printf("Interseccao: ");
    for(i=0; i<cont; i++){
        printf("%d\ ", vetorInt[i]);
    }


    return 0;
}

