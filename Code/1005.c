#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void aux(int n, int* vet, int* pedras, int pos, int* melhor){
    if (pos == n){
        int aux = abs(vet[0] - vet[1]);
        if (aux < *melhor)
            *melhor = aux;
    }
    else{
        int i;
        for(i = 0; i<2; i++){
            vet[i]+= pedras[pos];
            aux(n, vet, pedras, pos+1, melhor);
            vet[i]-= pedras[pos];
        }
    }
}

int main(){
    int n, pedras[20], vet[2], i;
    int* melhor = (int*) malloc(sizeof(int));
    *melhor = 0;
    scanf("%i", &n);
    for(i = 0; i<n; i++)
        scanf("%i", &pedras[i]);
    for(i = 0; i<n; i++)
        *melhor+= pedras[i];
    vet[0] = 0;
    vet[1] = 0;
    aux(n, vet, pedras, 0, melhor);
    printf("%i", *melhor);
    return 0;
}