#include <stdlib.h>
#include <stdio.h>

int rest(int x, int n, int m){
    int i, total = 1;
    for(i = 0; i<n; i++){
        total*= x%m;
        total = total%m;
    }
    return total;
}

int main(){
    int n, m, y, x, controle = 0, total;
    scanf("%i %i %i", &n, &m, &y);
    for(x = 0; x<=m-1; x++){
        total = rest(x, n, m);
        if(total == y){
            printf("%i ", x);
            controle = 1;
        }
    }
    if(controle == 0)
        printf("-1");
    return 0;
}
