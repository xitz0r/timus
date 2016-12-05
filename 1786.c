#include <stdlib.h>
#include <stdio.h>
#include <string.h>

 int main(void){
    char nome[201];
    char* sandro = "Sandro";
    int tamanho, total = 0, i, totalmax = 100, k, tam;
    scanf("%s", nome);
    tamanho = strlen(nome);
for(k = 0; k<tamanho-5; k++){
    total = 0;
    tam = k;
    for(i=0; i<6; i++){
        if(nome[tam] != sandro[i]){
            if(((nome[tam] >= 'a') && (nome[tam] <= 'z') && (sandro[i] >= 'a') && (sandro[i] <= 'z')) || ((nome[tam] >= 'A') && (nome[tam] <= 'Z') && (sandro[i] >= 'A') && (sandro[i] <= 'Z')))
                total+= 5;
            else{
                if((nome[tam] == (sandro[i] - 'A' + 'a')) || (nome[tam] == (sandro[i] - 'a' + 'A')))
                    total+= 5;
                else
                    total+= 10;
            }
    }
    tam++;
    }
    if(total < totalmax)
        totalmax = total;
}
    printf("%i", totalmax);
    return 0;
 }