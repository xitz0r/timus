#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, m, i;
    scanf("%i %i", &n, &m);
    for(i = 1; i<=n; i++)
        printf("%i ", i);
    printf("\n");
    for(i = 100; i<=100*m; i+=100)
        printf("%i ", i);
    return 0;
}
