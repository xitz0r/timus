#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n, i, x, y, j, counter = 1, coluna, linha = 0;
    int mat[100][100];
    scanf("%i", &n);
    coluna = n-1;
    x = 0;
    y = n-1;
    while(counter<=n*n){

        mat[x][y] = counter;
        counter++;
        x++;
        y++;

        if((y == n) && (x != n)){
            coluna--;
            y = coluna;
            x = 0;
        }
        else if (x == n){
            linha++;
            x = linha;
            y = 0;
        }
    }
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++)
            printf("%i ", mat[i][j]);
        printf("\n");
    }
    return 0;
}