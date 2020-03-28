#include <stdio.h>
#include <stdlib.h>

int main(){
	const int N = 5;
	int a = 0, b = 1, c = N-2, d = N-1, ctr = 0;
	int t[5] = {2, 1, 2, 1, 2};
	while(b < N){
		//printf("a = %d, b = %d, c = %d, d = %d\n t[a] = %d, t[b] = %d, t[c] = %d, t[d] = %d\n\n", a, b, c, d, t[a], t[b], t[c], t[d]);
		if(t[a] == t[b] && t[c] == t[d]){
			ctr++;
			a++;
			d--;
		}
		else{
			ctr = 0;
		}
		b++;
		c--;
	}
	printf("%d\n", ctr);
}
