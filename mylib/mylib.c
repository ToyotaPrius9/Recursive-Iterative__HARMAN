#include <stdio.h>

int fibonacci_iter(int N){
	int num1 = 0, num2 = 1, numN;
	if(N==0){
		return num1;
	} else if(N==1){
		return num2;
	} else{
		for (int i = 2;i<=N;i++){
			numN = num1 + num2;
			num1 = num2;
			num2 = numN;
		}
		return numN;
	}
}

int fibonacci_rec(int N){
	if(N==0){
		return 0;
	} else if (N==1){
		return 1;
	} else{
		return fibonacci_rec(N-1)+fibonacci_rec(N-2);
		}
	}
	