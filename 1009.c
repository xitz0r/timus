#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int aux(int n, int k){
    if(n == 2)
        return k*(k-1);
    if(n == 1)
        return k-1;
    return (k-1)*aux(n-1, k) + (k-1)*aux(n-2, k);
}

int main(){
    int n, k;
    scanf("%i %i", &n, &k);

    printf("%i", aux(n, k));
    return 0;
}