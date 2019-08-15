#include <stdio.h>
#include <stdlib.h>

/* q7. Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. 
Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, 
sendo que caso o usuário digite um número que já foi digitado anteriormente, 
o programa deverá pedir para ele digitar outro número. 
Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, 
verificando se ele existe entre os números que já foram fornecidos. 
Exibir na tela o vetor final que foi digitado.*/

int main(){

int vetor[10];
int num;
int i;
int j;

printf("Digite um numero: \n");
scanf("%d",&num);
vetor[0] = num;

for(i=1; i<10; i++){
    scanf("%d",&num);
    for(j=0; j<i; j++){
        if(vetor[j] == num){
            printf("Digite um outro numero: ");
            scanf("%d",&num);
            vetor[j] = num;
        }
        else{
            vetor[i] = num;
        }
        }
    }
    printf("Vetor: ");
    for(i=0; i<10; i++){
        printf("%d\ ", vetor[i]);
    }
    return 0;
}