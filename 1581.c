#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, vet[1000], i, aux, qtd;
    scanf("%i", &n);
    for(i = 0; i<n; i++)
        scanf("%i", &vet[i]);
    aux = vet[0];
    qtd = 0;
    for(i = 0; i<n; i++){
        if (vet[i] == aux)
            qtd++;
        else{
            printf("%i %i ", qtd, aux);
            qtd = 1;
            aux = vet[i];
        }
    }
    printf("%i %i", qtd, aux);
    return 0;
}