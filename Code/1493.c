#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int aux(int a){
    int total;
    total = a%10;
    a-= a%10;
    a/=10;
    total+= a%10;
    a-= a%10;
    a/= 10;
    total+= a;
    return total;
}

int main(){
    int a, b;
    char n[7];
    scanf("%s", n);
    a = (int)(n[0] - '0')*100 + (int)(n[1] - '0')*10 + (int)(n[2] - '0');
    b = (int)(n[3] - '0')*100 + (int)(n[4] - '0')*10 + (int)(n[5] - '0');
    if ((aux(a) == aux(b+1)) || (aux(a) == aux(b-1)))
        printf("Yes");
    else
        printf("No");
    return 0;
}