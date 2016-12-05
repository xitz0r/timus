#include <stdlib.h>
#include <stdio.h>

 int main(void){
    int n, i;
    long long int total = 0;
    scanf("%i", &n);
    for(i = 1; i<=n; i++)
        total+= i*(n+2);
    printf("%lli", total);
    return 0;
 }
