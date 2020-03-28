#include <stdio.h>
#include <stdlib.h>

prefixe_suffixe(int *t, int N){

	int a = 0, b = 1, ctr = 0;

	while(b < N){

		if(t[a] == t[b] && t[N-1-b] == t[N-1-a]){
			ctr++;
			a++;
		}

		else{
			ctr = 0;
		}

		b++;
	}
}
