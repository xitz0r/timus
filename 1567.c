#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int aux(char c){
    if((c == '.') || (c == ' ') || (c == '_'))
        return 1;
    if (c == ',')
        return 2;
    if (c == '!')
        return 3;
    if ((c >= 'a') && (c <= 'z')){
        c = c-'a';
        c = c%3;
        return (int)c+1;
    }
    return 0;
}

int main(){
    char vet[1001];
    int i, total = 0, l;
    scanf("%[^\n]s", vet);
    l = strlen(vet);
    for(i = 0; i<l; i++)
        total+= aux(vet[i]);
    printf("%i", total);
    return 0;
}