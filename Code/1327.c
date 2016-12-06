    #include <stdio.h>
    #include <stdlib.h>

    int main(){
        int a, b, total;
        scanf("%i %i", &a, &b);
        if(a == b){
            if(a%2 == 1)
                printf("1");
            else
                printf("0");
        }
        else{
            if((a%2 == 1) && (b%2 == 1))
                printf("%i", (b-a)/2 + 1);
            else if((a%2 == 1) || (b%2 == 1))
                printf("%i", (b-a-1)/2 + 1);
            else
                printf("%i", (b-a)/2);
        }
        return 0;
    }