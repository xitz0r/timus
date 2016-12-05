#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b;
    scanf("%i %i", &a, &b);
    if ((a*b)%2 == 0)
        printf("[:=[first]");
    else
        printf("[second]=:]");
    return 0;
}