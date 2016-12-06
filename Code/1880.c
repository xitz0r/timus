#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i, j, n1, n2, n3, vet1[4000], vet2[4000], vet3[4000], b=0, c=0, total = 0, k;
    scanf("%i", &n1);
    for(i = 0; i<n1; i++)
        scanf("%i", &vet1[i]);
    scanf("%i", &n2);
    for(i = 0; i<n2; i++)
        scanf("%i", &vet2[i]);
    scanf("%i", &n3);
    for(i = 0; i<n3; i++)
        scanf("%i", &vet3[i]);

    for(i = 0; i<n1 && b != n2 && c != n3; i++){
        for(j = b; j<n2; j++){
            if(vet2[j] > vet1[i])
                break;
            b = j;
            if(vet1[i] == vet2[j]){
                for(k = c; k<n3; k++){
                    if(vet3[k] > vet2[j])
                        break;
                    c = k;
                    if(vet3[k] == vet2[j])
                        total++;
                }
            }
        }
    }
    printf("%i", total);

    return 0;
}