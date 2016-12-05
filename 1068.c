#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, total = 0;
    scanf("%i", &a);
    if(a<=0)
        for(i = 1; i>=a; i--)
            total+= i;
    else
        for(i = 1; i<=a; i++)
            total+= i;
    printf("%i", total);
    return 0;
}