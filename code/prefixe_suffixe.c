/**
 * prefixe_suffixe.c
 *
 * Ce fichier contient la focntion prefixe_suffixe
 *
 * @authors: Seel Antoine 20180459 &&  Iglesias Raphaël
 * @date: 28/03/20
 * @projet: INFO0947 Projet 1
 */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "prefixe_suffixe.h"

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
