#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, x, pos = 0, neg = 0, i, aux;
    scanf("%i %i", &n, &x);
    for(i = 0; i<n; i++){
        scanf("%i", &aux);
        if(aux < 0){
            if((neg == 0) || (aux > neg))
                neg = aux;
        }
        else{
            if((pos == 0) || (aux < pos))
                pos = aux;
        }
    }
    if(x < 0){
        if((neg > x) && (neg != 0))
            printf("Impossible");
        else
            printf("%i %i", pos*2+ x*-1, x*-1);
    }
    else{
        if((pos < x) && (pos != 0))
            printf("Impossible");
        else
            printf("%i %i", x, neg*-2 + x);
    }



    return 0;
}
