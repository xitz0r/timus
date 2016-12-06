#include <stdlib.h>
#include <stdio.h>

 int main(void){
    int paginas, capa, a, b;
    scanf("%i %i %i %i", &paginas, &capa, &a, &b);
    printf("%i", abs((b-a)*capa*2 + (b-a-1)*paginas));
    return 0;
 }
