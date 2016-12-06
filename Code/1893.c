#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char vet[4], letra = '8';
    int tam, numero;
    scanf("%s", vet);
    tam = strlen(vet);
    if(tam == 3){
        numero = (vet[0]-'0')*10 + (vet[1] - '0');
        letra = vet[2];
    }
    else{
        numero = vet[0] - '0';
        letra = vet[1];
    }
    if(letra == 'I')
        return 0;
    if(letra == 'A')
        printf("window");
    else{
        if(numero < 3){
            if(letra == 'D')
                printf("window");
            else
                printf("aisle");
        }
        else if(numero < 21){
            if(letra == 'F')
                printf("window");
            else
                printf("aisle");
        }
        else{
            if(letra == 'K')
                printf("window");
            else if((letra == 'C') || (letra == 'D') || (letra == 'G') || (letra == 'H'))
                printf("aisle");
            else
                printf("neither");
        }
    }
    return 0;
}