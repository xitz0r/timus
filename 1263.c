#include <stdlib.h>
#include <stdio.h>
#include <string.h>

 int main(void){
    int candidatos[10001], i, n, m, aux;
    scanf("%i %i", &n, &m);
    for(i = 1; i<=n; i++)
        candidatos[i] = 0;
    for(i = 0; i<m; i++){
        scanf("%i", &aux);
        candidatos[aux]++;
    }
    for(i = 1; i<=n; i++)
        printf("%.2f%c\n", (float)candidatos[i]/m*100, '%');
    return 1;
 }
