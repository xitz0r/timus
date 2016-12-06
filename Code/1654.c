#include <stdio.h>
#include <stdlib.h>

char vet[200000];
char vet2[200000];

int main(void){
    int i = 0, j = 0;
    scanf("%s", vet);
    while(vet[i] != '\0'){
        if(vet[i] == vet[i+1]){
            i+= 2;
            while((j >= 0) && (vet[i] == vet2[j-1])){
                j--;
                i++;
            }
        }
        else
            vet2[j++] = vet[i++];
    }
    if(j >= 0)
        vet2[j] = '\0';
    else
        vet2[0] = '\0';
    printf("%s", vet2);
    return 0;
    }