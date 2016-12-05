#include <stdio.h>
#include <stdlib.h>

int triangular(long long int t){
    long double n = (1+sqrt(1+8*t))/2.0;
    if(n == (int)n)
        return 1;
    return 0;
}

int vet[65535];

int main(void){
    int t, i;
    long long int n;
    scanf("%i", &t);
    for(i = 0; i<t; i++){
        scanf("%lli", &n);
        if(triangular(n-1) == 1)
            vet[i] = 1;
        else
            vet[i] = 0;
    }
    for(i = 0; i<t; i++)
        printf("%i ", vet[i]);
    return 0;
    }