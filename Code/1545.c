#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n, i, counter = 0, j;
    char letter;
    char* vet[1000];
    char* aux[1000];
    scanf("%i", &n);
    for(i = 0; i<n; i++){
        vet[i] = (char*)malloc(3*sizeof(char));
        scanf("%s", vet[i]);
    }
    scanf("%c", &letter);
    scanf("%c", &letter);
    for(i = 0; i<n; i++)
        if(letter == vet[i][0]){
            aux[counter] = vet[i];
            counter++;
        }
    for(i = 0; i<counter; i++)
        for(j = i+1; j<counter; j++){
            if (aux[i][1] > aux[j][1]){
                letter = aux[i][1];
                aux[i][1] = aux[j][1];
                aux[j][1] = letter;
            }
        }
    for(i = 0; i<counter; i++)
        printf("%s\n", aux[i]);
    return 0;
}