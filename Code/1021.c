#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet1[50000], vet2[50000], i, j, ini, meio, fim;
    long int n1, n2;
    scanf("%li", &n1);
    for(i = 0; i<n1; i++)
        scanf("%i", &vet1[i]);
    scanf("%li", &n2);
    for(i = 0; i<n2; i++)
        scanf("%i", &vet2[i]);

    for(i = 0; i<n1; i++){
        ini = 0;
        fim = n2 - 1;
        while(ini <= fim){
            meio = (ini + fim) / 2;
            if(vet1[i] + vet2[meio] == 10000){
                printf("YES");
                return 0;
            }
            if(vet1[i] + vet2[meio] > 10000)
                ini = meio + 1;
            else
                fim = meio - 1;
        }
    }
    printf("NO");
    return 0;
}
