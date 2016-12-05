#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	long long int ant = 2, total = 2;
	int n, i;
	scanf("%i", &n);
	for(i = 2; i<n; i++){
		total+= ant;
		ant = total-ant;
	}
	printf("%lli", total);
	return 0;
}