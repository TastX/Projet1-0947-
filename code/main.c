#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "prefixe_suffixe.h"

int main(){
	int tab[10] = {1, 2, 1, 3, 1, 2, 1, 2, 1, 3};
	int valeur = prefixe_suffixe(tab, 10);
	printf("%d\n", valeur);
}
