#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(void){
	const int N = 10;
	float start = (float)clock()/CLOCKS_PER_SEC;
	
	for(unsigned int i=0; i<N; i++){
		fibonacci_rec(i);
		}
		
	float end = (float)clock()/CLOCKS_PER_SEC;
	double bmTime= end-start;
	
	printf("BenchMark timings on da Recursive method at N = %d : %f is ->\n",N,bmTime);
	
	return 0;
	}