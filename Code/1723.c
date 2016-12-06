#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[51], letras[26], letra;
    int maior = 0, i;
    scanf("%s", palavra);
    for(i = 0; i<26; i++)
        letras[i] = 0;
    for(i = 0; palavra[i] != '\0'; i++)
        letras[palavra[i]-'a']++;
    for(i = 0; palavra[i] != '\0'; i++)
        if(maior < letras[palavra[i]-'a']){
            maior = letras[palavra[i]-'a'];
            letra = palavra[i];
        }
    printf("%c", letra);
    return 0;
}