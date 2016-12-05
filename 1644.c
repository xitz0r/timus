#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t, menor = 2, maior = 10, n, i;
    char texto[15];
    scanf("%i", &t);
    for (i = 0; i<t; i++){
        scanf("%i", &n);
        scanf("%s", texto);
        if(strcmp(texto, "hungry") == 0){
            if(n > menor)
                menor = n;
        }
        else{
            if(n < maior)
                maior = n;
        }
    }
    if(menor >= maior)
        printf("Inconsistent");
    else
        printf("%i", maior);
    return 0;
}