#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(void){
	const int N=10;
	float start = (float)clock()/CLOCKS_PER_SEC;
	
	for(unsigned int i=0;i<N;i++){
		fibonacci_iter(i);
		}
	
	float end = (float)clock()/CLOCKS_PER_SEC;
	double bmTime=end-start;
	
	printf("The benchmark time on the Iterative approach at N = %d : %f is ->\n",N, bmTime);
	
	return 0;
	}