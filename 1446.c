#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char slyth[1000][201];
char huffl[1000][201];
char griff[1000][201];
char raven[1000][201];

int main(){
    int n, i, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    char nome[201];
    char team[20];
    char lixo;
    scanf("%i", &n);
    for(i = 0; i<n; i++){
	scanf("%c", &lixo);	
        scanf("%[^\n]s", nome);
	scanf("%c", &lixo);
        scanf("%s", team);
        if(strcmp(team, "Slytherin") == 0)
            strcpy(slyth[c1++], nome);
        else if(strcmp(team, "Hufflepuff") == 0)
            strcpy(huffl[c2++], nome);
        else if(strcmp(team, "Gryffindor") == 0)
            strcpy(griff[c3++], nome);
        else
            strcpy(raven[c4++], nome);
    }
    printf("Slytherin:\n");
    for(i = 0; i<c1; i++)
        printf("%s\n", slyth[i]);
    printf("\nHufflepuff:\n");
    for(i = 0; i<c2; i++)
        printf("%s\n", huffl[i]);
    printf("\nGryffindor:\n");
    for(i = 0; i<c3; i++)
        printf("%s\n", griff[i]);
    printf("\nRavenclaw:\n");
    for(i = 0; i<c4; i++)
        printf("%s\n", raven[i]);
    return 0;
}
