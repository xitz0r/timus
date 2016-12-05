#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testes,vet[100], counter, i;
    char s[3];
    scanf("%i", &testes);
    for(counter = 0; counter<testes; counter++){
        vet[counter] = 0;
        scanf("%s", s);
        if (s[0] - 2 >= 'a'){
            if (s[1] + 1 < '9')
                vet[counter]++;
            if (s[1] - 1 >= '1')
                vet[counter]++;
        }
        if (s[0] + 2 <= 'h'){
            if (s[1] + 1 < '9')
                vet[counter]++;
            if (s[1] - 1 >= '1')
                vet[counter]++;
        }
        if (s[0] - 1 >= 'a'){
            if (s[1] - 2 >= '1')
                vet[counter]++;
            if (s[1] + 2 < '9')
                vet[counter]++;
        }
        if (s[0] + 1 <= 'h'){
            if (s[1] - 2 >= '1')
                vet[counter]++;
            if (s[1] + 2 < '9')
                vet[counter]++;
        }
    }
    for(i = 0; i<counter; i++)
        printf("%i\n", vet[i]);
    return 0;
}