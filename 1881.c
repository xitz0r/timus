#include <stdlib.h>
#include <stdio.h>
#include <string.h>

 int main(void){
    int linhas, simbolos, n, total = 1, i, aux = 0, compr, result;
    char palavra[101];
    scanf("%i %i %i", &linhas, &simbolos, &n);
    for(i = 0; i<n; i++){
        scanf("%s", palavra);
        compr = strlen(palavra);
        if(aux + compr <= simbolos){
            aux+= compr + 1;
        }
        else{
            aux = compr + 1;
            total++;
        }
    }
    result = total/linhas;
    if(total%linhas != 0)
        result++;
    printf("%i", result);
    return 0;
 }
