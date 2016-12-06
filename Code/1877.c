#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int igual(char* s1, char* s2){
    int i;
    for(i = 0; s1[i] != '\0'; i++)
        if(s1[i] != s2[i])
            return 0;
    return 1;
}

void soma(char* s){
    s[3]+= 2;
    if (s[3] > '9'){
        s[3] = '0';
        s[2]+= 1;
        if (s[2] > '9'){
            s[2] = '0';
            s[1]+= 1;
            if (s[1] > '9'){
                s[1] = '0';
                s[0]+=1;
            }
        }
    }
}

void soma2(char* s){
    s[3]+= 2;
    if (s[3] > '9'){
        s[3] = '1';
        s[2]+= 1;
        if (s[2] > '9'){
            s[2] = '0';
            s[1]+= 1;
            if (s[1] > '9'){
                s[1] = '0';
                s[0]+=1;
            }
        }
    }
}

int main(){
    int i, result = 0;
    char l1[5], l2[5], aux[5];
    scanf("%s %s", l1, l2);
    for(i = 0; i<4; i++)
        aux[i] = '0';
    aux[4] = '\0';
    for(i = 0; i<10000; i+=2){
        if (igual(aux, l1) == 1)
            result = 1;
        soma(aux);
    }
    for(i = 0; i<3; i++)
        aux[i] = '0';
    aux[3] = '1';

    for(i = 1; i<10001; i+=2){
        if (igual(aux, l2) == 1)
            result = 1;
        soma2(aux);
    }
    if(result == 1)
        printf("yes");
    else
        printf("no");
    return 0;
}