#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0, letra = 0;
    char s[10000];
    while(scanf("%c", &s[i]) == 1){
        if(letra == 1){
            if((s[i] >= 'A') && (s[i] <= 'Z'))
                s[i] = s[i] - 'A' + 'a';
            else if((s[i] != ' ') && (s[i] != ',') && (s[i] != '\n') && (s[i] != '-') && (s[i] != ':'))
                letra = 0;
        }
        else{
            if((s[i] >= 'A') && (s[i] <= 'Z'))
                letra = 1;
        }
        i++;
    }
    s[i] = '\0';
    printf("%s", s);
    return 0;
}
