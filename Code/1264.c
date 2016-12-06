#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int m, n;
    scanf("%i %i", &n, &m);
    if (m == 0)
        printf("%i", n);
    else if (n == 0)
        printf("0");
    else
        printf("%i", (m+1)*n);
    return 0;
}