#include <stdio.h>
#include <stdlib.h>
/* q4. Faca um programa que preencha um vetor de tamanho 100
com os 100 primeiros naturais que
NAO sao multiplos de 7 ou que terminam com 7*/

int main(){
    int a[100], x = 0, n;

    for(n=0; n<100;){
            if(((x%7) != 0) || ((x%10) == 7)){
                a[n] = x;
                n++;
            }
        x++;
    }
    for(n=0; n<100; n++){
        printf("vetor = %d\n", a[n]);
    }

    return 0;
}
