#include <stdio.h>
#include <stdlib.h>

void imprimir(int n){
     if (n < 5)
          printf("few\n");
     else if (n < 10)
          printf("several\n");
     else if (n < 20)
          printf("pack\n");
     else if (n < 50)
          printf("lots\n");
     else if (n < 100)
          printf("horde\n");
     else if (n < 250)
          printf("throng\n");
     else if (n < 500)
          printf("swarm\n");
     else if (n < 1000)
          printf("zounds\n");
     else
          printf("legion\n");
}

int main(void){
     int n;
     scanf("%i", &n);
     imprimir(n);
     return 0;
}