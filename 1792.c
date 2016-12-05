#include <stdio.h>
#include <stdlib.h>

int verificar(int* vet){
    if((vet[0]+vet[2]+vet[3])%2 != vet[5])
        return 0;
    if((vet[0]+vet[1]+vet[3])%2 != vet[6])
        return 0;
    if((vet[1]+vet[2]+vet[3])%2 != vet[4])
        return 0;
    return 1;
}

int arrumar(int* vet){
    int aux[7], i, maior = -3, indice;
    for(i = 0; i<7; i++)
        aux[i] = 0;
    if((vet[0]+vet[2]+vet[3])%2 != vet[5]){
        aux[0]+= 1;
        aux[2]+= 1;
        aux[3]+= 1;
        aux[5]+= 1;
    }
    else{
        aux[0]-= 1;
        aux[2]-= 1;
        aux[3]-= 1;
        aux[5]-= 1;
    }
    if((vet[0]+vet[1]+vet[3])%2 != vet[6]){
        aux[0]+= 1;
        aux[1]+= 1;
        aux[3]+= 1;
        aux[6]+= 1;
    }
    else{
        aux[0]-= 1;
        aux[1]-= 1;
        aux[3]-= 1;
        aux[6]-= 1;
    }
    if((vet[1]+vet[2]+vet[3])%2 != vet[4]){
        aux[1]+= 1;
        aux[2]+= 1;
        aux[3]+= 1;
        aux[4]+= 1;
    }
    else{
        aux[1]-= 1;
        aux[2]-= 1;
        aux[3]-= 1;
        aux[4]-= 1;
    }
    for(i = 0; i<7; i++)
        if(aux[i] > maior){
            maior = aux[i];
            indice = i;
        }
    if(vet[indice] == 0)
        vet[indice] = 1;
    else
        vet[indice] = 0;
}

int main(){
    int vet[7], i;
    for(i = 0; i<7; i++)
        scanf("%i", &vet[i]);
    if(verificar(vet) == 0)
        arrumar(vet);
    for(i = 0; i<7; i++)
        printf("%i ", vet[i]);
    return 0;
}