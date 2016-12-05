#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int vet[101], k, i, j, aux, grupos, total = 0;
    scanf("%i", &k);
    for (i = 0; i<k; i++)
        scanf("%i", &vet[i]);
    grupos = k/2 + 1;

    for(i = 0; i<k; i++)
        for(j = i; j<k; j++)
            if(vet[j] < vet[i]){
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
    for(i = 0; i<grupos; i++)
        total+= vet[i]/2 + 1;
    printf("%i", total);
    return 0;
}