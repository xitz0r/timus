#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void aux(int* mat[][100], int n, int diagonal){
    int j, i;
    for (j = diagonal, i = 0; j>=0; j--, i++)
        printf("%i ", mat[j][i]);
}

void aux2(int* mat[][100], int n, int diagonal){
    int j, i;
    for (j = n-1, i = diagonal; i<n; j--, i++)
        printf("%i ", mat[j][i]);
}

int main(){
    int n, mat[100][100], i, j;
    scanf("%i", &n);
    for(i = 0; i<n; i++)
        for(j = 0; j<n; j++)
            scanf("%i", &mat[i][j]);


    for(i = 0; i<n; i++)
        aux(mat, n, i);
    for(i = 1; i<n; i++)
        aux2(mat, n, i);
    return 0;
}
