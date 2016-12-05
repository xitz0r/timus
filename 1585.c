#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n, i, emp = 0, mac = 0, little = 0;
    char s1[10], s2[10];
    scanf("%i", &n);
    for(i = 0; i<n; i++){
        scanf("%s", s1);
        scanf("%s", s2);
        if (s1[0] == 'E')
            emp++;
        else if (s1[0] == 'M')
            mac++;
        else
            little++;
    }
    if((emp > mac) && emp > little)
        printf("Emperor Penguin");
    else if (mac > little)
        printf("Macaroni Penguin");
    else
        printf("Little Penguin");

    return 0;
}