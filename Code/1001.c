#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int vet[1000000];

int main(){
    int counter = 0, i;
    while(scanf("%lli", &vet[counter]) == 1)
        counter++;
    for(i = counter-1; i>=0; i--)
        printf("%18.4lf\n", (double)sqrt(vet[i]));
    return 0;
}