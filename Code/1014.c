#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fatorar(int* vet, int* n, int* tam){
    int control, i, aux;
    while(*n > 9){
        aux = sqrt(*n)+1;
        control = 0;
        for(i = 2; i<aux; i++){
            if(*n%i == 0){
                control = 1;
                vet[*tam] = i;
                *tam+= 1;
                *n/= i;
                break;
            }
        }
        if((control == 0) && (*n > 9))
            return -1;
    }
    return 1;
}

int agrupar(int* vet, int tam){
    int i, j, k;
    for(i = 0; i<tam-1; i++)
        for(j = i+1; j<tam; j++){
            if(vet[i]*vet[j] < 10){
                vet[i] = vet[i]*vet[j];
                for(k = j; k<tam-1; k++)
                    vet[k] = vet[k+1];
                return 1;
            }
        }
    return 0;
}

int main(){
    int n, vet[10000], tam = 0, i, j, aux;
    scanf("%i", &n);
    if(n == 0){
        printf("10");
        return 0;
    }

    if(fatorar(vet, &n, &tam) == -1){
        printf("-1");
        return 0;
    }


    for(i = 0; i<tam-1; i++)
        for(j = i+1; j<tam; j++)
            if(vet[i] < vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }

    vet[tam] = n;
    tam++;
    while(agrupar(vet, tam) == 1)
        tam--;

    for(i = 0; i<tam-1; i++)
        for(j = i+1; j<tam; j++)
            if(vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
    for(i = 0; i<tam; i++)
        printf("%i", vet[i]);

    return 0;
}