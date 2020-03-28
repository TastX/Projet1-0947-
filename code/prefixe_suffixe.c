#include <stdio.h>
#include <stdlib.h>

int main(){
	const int N = 10;
	int a = 0, b = 1, c = N-2, d = N-1, ctr = 0;
	int t[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	while(b < N){
		if(t[a] == t[b] /*&& t[N-1-b] == t[N-1-a]*/){
			ctr++;
			a++;
			b++;
		}
		else{
			a = 0;
			b -= (ctr - 1);
			ctr = 0;
		}
		//b++;
	}
	printf("%d\n", ctr);
}
