#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, vet[101], pessoas = 0, controle = 1, maior = -1;
    float media = 0, total = 0;
    scanf("%i", &n);
    for(i = 0; i<n; i++){
        scanf("%i", &vet[i]);
        media+= vet[i];
        if(vet[i] > maior)
            maior = vet[i];
    }
    media/= (float)(n+1);
    for(i = 0; i<n; i++)
        if((vet[i] > media) && (vet[i] != maior))
            controle = 0;
    for(i = 0; i<n; i++)
        if(vet[i] > media){
            pessoas++;
            total+= vet[i] - media;
        }
    for(i = 0; i<n; i++){
        if(vet[i] > media){
            if(controle == 1)
                printf("%i ", 100/pessoas);
            else
                printf("%i ", (int)(100*(vet[i]-media)/total));
        }
        else
            printf("0 ");
    }
    return 0;
}
