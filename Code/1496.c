#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int faux(char* a, char* b){
    int i;
    for(i = 0; a[i] != '\0'; i++)
        if(a[i] != b[i])
            return 0;
    return 1;
}

int verificar(char** mataux, char* vet, int n){
    int i;
    for(i = 0; i<n; i++)
        if (faux(mataux[i], vet) == 1)
            return 1;
    return 0;
}

int main(){
    int n, i, tam = 0, j;
    char* mat[100];
    char* mataux[100];
    scanf("%i", &n);
    for(i = 0; i<n; i++){
        mat[i] = (char*)malloc(31*sizeof(char));
        scanf("%s", mat[i]);
    }
    for(i = 0; i<(n-1); i++){
        for(j = i+1; j<n; j++){
            if(faux(mat[i], mat[j]) == 1)
                if(verificar(mataux, mat[i], tam) == 0){
                    mataux[tam++] = mat[i];
                    printf("%s\n", mat[i]);
                }
        }
}

    return 0;
}