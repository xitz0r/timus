#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void verificar(int *vet, int x, int *tam){
    int i, max, primo, j;
    for(i = vet[(*tam)-1]+2; (*tam) < x; i+=2){
        max = (int)sqrt(i);
        primo = 1;
        for(j = 2; j<=max; j++){
            if (i%j == 0){
                primo = 0;
                break;
            }
        }
        if (primo == 1)
            vet[(*tam)++] = i;
    }
    printf("%i\n", vet[(*tam)-1]);
}

int main(){
    int n, x, i, vet[100000], cont = 2;
    vet[0] = 2;
    vet[1] = 3;
    scanf("%i", &n);
    for(i = 0; i<n; i++){
        scanf("%i", &x);
        if(x <= cont)
            printf("%i\n", vet[x-1]);
        else
            verificar(vet, x, &cont);
    }
    return 0;
}
