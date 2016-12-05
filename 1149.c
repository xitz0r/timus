#include <stdio.h>
#include <stdlib.h>

void fA(int n){
    int i;
    printf("sin(1");
    for(i = 2; i<=n; i++){
        if(i%2 == 0)
            printf("-");
        else
            printf("+");
        printf("sin(%i", i);
    }
    for(i = 0; i<n; i++)
        printf(")");
}

void fS(int n){
    int i;
    for(i = 1; i<n; i++)
        printf("(");
    for(i = 1; i<n; i++){
        fA(i);
        printf("+%i)", n-i+1);
    }
    fA(n);
    printf("+1");
}

int main(){
    int n;
    scanf("%i", &n);
    fS(n);
    return 0;
}
