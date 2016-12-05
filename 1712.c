#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char matx[4][5], mat[4][5];
    int i, j, x, y;
    for(i = 0; i<4; i++)
        scanf("%s", matx[i]);
    for(i = 0; i<4; i++)
        scanf("%s", mat[i]);
    for(i = 0; i<4; i++)
        for(j = 0; j<4; j++)
            if(matx[i][j] == 'X')
                printf("%c", mat[i][j]);
    x = 0;
    for(j = 0; j<4; j++){
        y = 0;
        for(i = 3; i>=0; i--){
            if(matx[i][j] == 'X')
                printf("%c", mat[x][y]);
            y++;
        }
        x++;
    }
    x = 0;
    for(i = 3; i>=0; i--){
        y = 0;
        for(j = 3; j>=0; j--){
            if(matx[i][j] == 'X')
                printf("%c", mat[x][y]);
            y++;
        }
        x++;
    }
    x = 0;
    for(j = 3; j>=0; j--){
        y = 0;
        for(i = 0; i<4; i++){
            if(matx[i][j] == 'X')
                printf("%c", mat[x][y]);
            y++;
        }
        x++;
    }
    return 0;
}