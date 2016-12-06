#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b, vet[2], i, maior;
    scanf("%i %i", &a, &b);
    maior = 39*2 + 40 + (a-40)*2 + 1;
    vet[1] = 40 + (a-40)*2 + 40;
    vet[2] = 80 + (b-40)*2 + 40;
    for(i = 1; i<3; i++)
        if(vet[i] > maior)
            maior = vet[i];
    printf("%i", maior);
    return 0;
}
