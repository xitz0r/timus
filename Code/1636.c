#include <stdio.h>
#include <stdlib.h>

int main(){
    int t1, t2, vet[10], i, total = 0;
    scanf("%i %i", &t1, &t2);
    for(i = 0; i<10; i++){
        scanf("%i", &vet[i]);
        total+= vet[i]*20;
    }
    if(t1 + total <= t2)
        printf("No chance.");
    else
        printf("Dirty debug :(");
    return 0;
}