#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
    int qtd;
    long int team;
}Ponto;

Ponto vet[150000];

int maior(Ponto *vet, int tam){
    int m = vet[0].qtd, i;
    for(i = 1; i<tam; i++)
        if(vet[i].qtd > m)
            m = vet[i].qtd;
    return m;
}

int main(){
    int n, i, tam = 0, m, j;
    scanf("%i", &n);
    for(i = 0; i<n; i++)
        scanf("%li %i", &vet[i].team, &vet[i].qtd);
    while(tam < n){
        m = maior(vet, n);
        for(j = 0; j<n; j++)
            if(vet[j].qtd == m){
                printf("%li %i\n", vet[j].team, vet[j].qtd);
                vet[j].qtd = -1;
                tam++;
            }
    }
    return 0;
}
