#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int fmenornota(int *vet){
    int i;
    for(i = 0; i<6; i++)
        if(vet[i] != 0)
            return i;
}

 int main(void){
    int valor[6] = {10, 50, 100, 500, 1000, 5000};
    int notas[6], bilhete, i, minimo, maximo = 0, menornota;
    for(i = 0; i<6; i++)
        scanf("%i", &notas[i]);
    scanf("%i", &bilhete);
    for(i = 0; i<6; i++)
        maximo+= valor[i]*notas[i];
    menornota = valor[fmenornota(notas)];

    minimo = maximo - menornota;
    if(minimo%bilhete != 0)
        minimo+= bilhete-minimo%bilhete;
    else
        minimo+= bilhete;
    printf("%i\n", (maximo-minimo)/bilhete + 1);

    while(minimo <= maximo){
        printf("%i ", minimo/bilhete);
        minimo+= bilhete;
    }

    return 1;
 }
