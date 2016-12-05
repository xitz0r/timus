#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int palindrome(char* s1){
    int i, n = strlen(s1);
    for(i = 0; i<n/2; i++){
        if(s1[i] != s1[n-1])
            return 0;
        n--;
    }
    return 1;
}


int palindrome2(char* s1, int tamanho){
    int i, n = tamanho;
    for(i = 0; i<tamanho; i++){
        if(s1[i] != s1[n-1])
            return 0;
        n--;
    }
    return 1;
}

void inverter(char* s){
    int i, tam = strlen(s), j, aux;
    j = tam-1;
    for(i = 0; i<tam/2; i++){
        aux = s[i];
        s[i] = s[j];
        s[j] = aux;
        j--;
    }
}


 int main(void){
    char nome[10001];
    int tam, i, counter;
    scanf("%s", nome);
    tam = strlen(nome);
    inverter(nome);
    counter = 0;
    for(i = 1; i<tam; i++){
        if(palindrome2(nome, i) == 1){
            counter = i;
        }
    }
    inverter(nome);
    printf("%s", nome);
    for(i = tam-counter-1; i>=0; i--)
        printf("%c", nome[i]);

    return 0;
 }