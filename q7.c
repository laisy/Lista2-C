#include <stdio.h>
#include <stdlib.h>

/* q7. Fa�a um programa para ler 10 n�meros DIFERENTES a serem armazenados em um vetor. 
Os dados dever�o ser armazenados no vetor na ordem que forem sendo lidos, 
sendo que caso o usu�rio digite um n�mero que j� foi digitado anteriormente, 
o programa dever� pedir para ele digitar outro n�mero. 
Note que cada valor digitado pelo usu�rio deve ser pesquisado no vetor, 
verificando se ele existe entre os n�meros que j� foram fornecidos. 
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