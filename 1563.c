#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, i, total = 0, tam = 0, j, result;
    char s[31];
    char vet[1000][31];
    scanf("%i", &n);
    for(i = 0; i<n; i++){
        char c;
	scanf("%c", &c);
        scanf("%[^\n]s", s);
        result = 0;
        for(j = 0; j<tam; j++)
            if(strcmp(vet[j], s) == 0)
                result = 1;
        if(result == 0){
            for(j = 0; s[j] != '\0'; j++){
                vet[tam][j] = s[j];
                vet[tam][j+1] = '\0';
            }
            tam++;
            total++;
        }
    }
    printf("%i", n-total);
    return 0;
}