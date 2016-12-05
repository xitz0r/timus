#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void){
	int n = 0, exc = 0, k = 0, total = 1;
	char s1[21];
	
	scanf("%d %s", &n, s1);
	exc = strlen(s1);
	total = 1;
	k = n;	
	if(n % exc == 0){	
		for(k = n; k >= exc; k -= exc){
			total *= k;
			//printf("Total %d\n", total);
		}
	}
	else{
		for(k = n; k > 0; k -= exc){
			total *= k;
			//printf("Total %d\n", total);
		}
	}
	
	printf("%d\n", total);
	
	return 0;
}