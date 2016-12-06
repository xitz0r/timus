#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int existe(int* vet, int x, int tam){
    int i;
    for(i = 0; i<tam; i++)
        if(vet[i] == x)
            return 1;
    return 0;
}

int maior(int* vet, int n){
    int i, maior = vet[0];
    for(i = 0; i<n; i++)
        if(vet[i] > maior)
            maior = vet[i];
    return maior;
}

int quantidade(int* vet, int n, int x){
    int i, total = 0;
    for(i = 0; i<n; i++)
        if (vet[i] == x)
            total ++;
    return total;
}

void zerar(int* vet, int n, int x, int qtd){
    int i = 0;
    while(qtd != 0){
        if(vet[i] == x){
            vet[i] = 0;
            qtd--;
        }
    }
}

int main(){
    int n, vet[150], i, j, total = 0, aux;
    scanf("%i", &n);
    for(i = 0; i<n; i++)
        scanf("%i", &vet[i]);
    for(i = 0; i<n-1; i++)
        for(j = i+1; j<n; j++)
            if(vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
    for(i = 0; i<n-3; i++)
        if(vet[i] == vet[i+3]){
            total++;
            i+=3;
        }
    printf("%i", total);
    return 0;
}