#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, k, temp;
    scanf("%i %i", &n, &k);
    n*= 2;
    if ((k == 0) && (n == 0))
        printf("0");
    else if (k >= n)
        printf("2");
    else if (n%k == 0)
        printf("%i", n/k);
    else
        printf("%i", n/k + 1);
    return 0;
}