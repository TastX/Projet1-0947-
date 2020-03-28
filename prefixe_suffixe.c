#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

prefixe_suffixe(int *t, int N){
	assert(t != NULL && N > 0);

	int i = 0, j = 1, ctr = 0;

	while(j < N){

		if(t[i] == t[j] && t[N-1-j] == t[N-1-i]){
			ctr++;
			i++;
		}

		else{
			ctr = 0;
		}

		j++;
	}
	return ctr;
}
