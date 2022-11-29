#include <stdio.h>
#include "mylib/mylib.h"

int main(void){
	int N;
	printf("enter a number: ");
	scanf("%d",&N);
	
	printf("the fibonacci numba for %d is %d (da iterative)\n", N, fibonacci_iter(N));
	printf("the fibonacci numba for %d is %d (da recursive)\n", N, fibonacci_rec(N));
	
	
	for (int i = 0;i<=N;i++){
		if(fibonacci_iter(i)!=fibonacci_rec(i)){
			printf("Error at %i\n",i);
			}
		else{
			printf("da fibonacci number F%d = %d+%d\n",i,fibonacci_iter(i), fibonacci_rec(i));
			}
		}
		return 0;
	}