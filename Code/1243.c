#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int vet[50], counter = 0, carry = 0, i;
    char s[51];
    scanf("%s", s);
    counter = strlen(s);
    for(i = 0; i<counter; i++)
        vet[i] = (int)(s[i] - '0');
    for(i = 0; i<counter-1; i++){
        vet[i]+= carry;
        vet[i]*= 10;
        carry = vet[i]%7;
    }
    vet[counter-1]+= carry;
    carry = vet[counter-1] % 7;
    printf("%i", carry);
    return 0;
}
