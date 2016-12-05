    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

int fx(int n){
    int i, j, k;
    for(i = 1; i<100; i++)
        for(j = 1; j<100; j++)
            for(k = 1   ; k<100; k++)
                if((pow(i,n) + pow(j, n) == pow(k, n)) && (i != j) && (j != k) && (i != k)){
                    printf("%i %i %i", i, j, k);
                    return 1;
                }
    printf("-1");
    return 1;
    }

    int main(){
        int n;
        scanf("%i", &n);
        n = fx(n);
        return 0;
    }