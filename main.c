#include <stdio.h>
#include <stdlib.h>

int main(){
	const int N = 10;
	int a = 0, b = 1, c = N-2, d = N-1, ctr = 0;
	int t[10] = {1, 2, 1, 3, 1, 2, 1, 2, 1, 3};
	while(b < N){
		if(t[a] == t[b] && t[N-1-b] == t[d]){
			ctr++;
			a++;
			d--;
		}
		else{
			ctr = 0;
		}
		b++;
	}
	printf("%d\n", ctr);
}
