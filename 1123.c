#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int palindrome(char* s, int tam){
	int i;
	for(i = 0; i<tam/2; i++)
		if(s[i] != s[tam-i-1])
			return 0;
	return 1;
}

void arrumarMenosMeio(char* s, int tam){
	int i, max;
	if(tam%2 == 0)
		max = tam/2-2;
	else
		max = tam/2-1;
	for(i = 0; i<=max; i++)
		s[tam-i-1] = s[i];
}

int menor(char *original, char *s, int tam){
	int i;
	for(i = 0; i<tam; i++){
		if(s[i] < original[i])
			return 1;
		else if(s[i] > original[i])
			return 0;
	}
	return 0;
}


int main(){
	char s[2002], original[2002];
	int tam, i, controle = 1, aux;
	scanf("%s", s);
	strcpy(original, s);
	tam = strlen(s);
	if(tam >= 2){
		arrumarMenosMeio(s, tam);
		if(!(palindrome(s, tam)) || menor(original, s, tam)){
			if(tam%2 == 0){
				if(s[tam/2-1] < s[tam/2])
					s[tam/2-1]++;
				s[tam/2] = s[tam/2-1];
				if(menor(original, s, tam) == 1){
					aux = tam/2-1;
					while(s[aux] == '9'){
						s[aux] = '0';
						s[tam-aux-1] = '0';
						aux--;
					}
					s[aux]++;
					s[tam-aux-1] = s[aux];
				}
			}
			else{
				if(s[tam/2] != '9')
					s[tam/2]++;
				else{
					s[tam/2] = '0';
					controle = 0;
				}
				if(controle == 0){
					aux = tam/2-1;
					while(s[aux] == '9'){
						s[aux] = '0';
						s[tam-aux-1] = '0';
						aux--;
					}
					s[aux]++;
					s[tam-aux-1] = s[aux];
				}
			}
		}
	}
	printf("%s", s);
	return 0;
}
			