#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sub(int n, int menos){
    int total;
    if(n - menos >= 0)
        total = n-menos;
    else
        total = 26 - (menos - n);
    return total;
}

int main(void){
    char vet[101];
    int saida[101];
    int tam, i;
    scanf("%s", vet);
    tam = strlen(vet);
    for(i = 0; vet[i] != '\0'; i++)
        saida[i] = (int)(vet[i] - 'a');
    for(i = 1; i<tam; i++)
        while((saida[i]-saida[i-1]) < 0)
            saida[i]+= 26;
    for(i = tam-1; i>0; i--)
        saida[i]-= saida[i-1];
    saida[i] = sub(saida[i], 5);
    for(i = 0; i<tam; i++)
        printf("%c", (char)(saida[i]+'a'));

    return 0;
}
