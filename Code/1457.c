#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[1000], i, n;
    double total = 0;
    scanf("%i", &n);
    for(i = 0; i<n; i++){
        scanf("%i", &vet[i]);
        total+= vet[i];
    }
    printf("%.6f", total/n);
    return 0;
}