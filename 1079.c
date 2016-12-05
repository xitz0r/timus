#include <stdio.h>
#include <stdlib.h>

int vet[100000];
int maior[100000];

int main(){
    int n, cont = 1, i;
    vet[0] = 0;
    maior[0] = 0;
    vet[1] = 1;
    maior[1] = 1;
    scanf("%i", &n);
    while(n != 0){
        if(n > cont){
            for(i = cont+1; i<=n; i++){
                if(i%2 == 0)
                    vet[i] = vet[i/2];
                else
                    vet[i] = vet[(i-1)/2] + vet[(i-1)/2 + 1];
                cont++;
                if(vet[i] > maior[i-1])
                    maior[i] = vet[i];
                else
                    maior[i] = maior[i-1];
            }
        }
        printf("%i\n", maior[n]);
        scanf("%i", &n);
    }


    return 0;
}
