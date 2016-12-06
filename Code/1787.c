#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, aux, counter, total = 0, pendente = 0, k;
    scanf("%i %i", &k, &n);
    for(counter = 0; counter<n; counter++){
        scanf("%i", &aux);
        if (aux > k)
            pendente+=aux-k;
        if (aux < k)
            pendente-=k-aux;
        if (pendente<0)
            pendente = 0;
    }
    printf("%i", pendente);
    return 0;
}