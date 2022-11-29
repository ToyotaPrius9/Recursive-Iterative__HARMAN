# Recursive-Iterative__HARMAN *_*



EXPLANATIONS:
_______________________________________________________________________________________________________________________________________________
-------------
  MYLIB:
---------------
  
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
  
  ____________________________________________________WHAT IS LIB.C?__________________________________________________________________________________________
  
  ##### In the following code, it defines two functions, one called fibonacci_iter which stands for fibonacci's iterative method, and a second function
  #####     called fibonacci_rec which stand for fibonacci's recursive method.
 
 
 
 ########_______________________________BEHIND THE SCENES OF THESE TWO FUNCTIONS_______________________________________#########
  |
  |##fibonacci_iter:
  |                     This function takes one int "N" and presets two variables num 1 and num 2, which stores 0 and 1 respectively. And the next step is to 
  |                       conduct a conditional "if" statement, in where if the int "N" is equal to num1 (0), it will return 0 (ends program), whereas if "N" is 
                            equal to num2 (1), it will just return the value of 1 (end program, but with an error). But if neither cases happen, it will execute
                              a fibonacci iteration by looping though the help of a variable "i", where inside the loop, the first step of it would be to make var
                               "N" equal to num1+num2(0+1) and after that it will make num1 equal to num 2 (making both num1 and num2 conataining int "1" now) and finally
                                making num2 equal to the value of "N", and then repeating this process until the loop ends, and returning the final product of "N".
                                  Pretty complex right? Had a hard time figuring/learning this one out....
                            
                            
  |#### fibonacci_rec:                        
  |                      This function takes one int "N" similiarly as the previous function, but this time it does not store any kind of variables in itsef
  |                         whatsoever. it takes the the int "N" and makes a conditional statement that if it's equal to 1, it returns 1 (an error) and where if 0,
  |                           return a 0 (an end) but if "N" was neither 1 or 0, it will return the addition of int "N" subtracted by 1 and int "N" subtracted                        
  |                             by 2. This process is really simplistic and definitely takes both less line of code, and less of my braincells. [compared to iter]
  |
	________________________________________________________________________________________________________________________________________________
  
  
  
  _________________________________________________________________________________________________________________________________________________
  
  ----------
  main_test.c:
  ------------
  
  
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
  
  
  
   ____________________________________________________WHAT IS MAIN_TEST.C?__________________________________________________________________________________________
  
  
  
  ### Well, it's pretty self explanitory, its a test to ensure whether or not the values from each methods [Iterative and Recursive] are outputting the same value
        and if the test tells me an error at an i value, well.... i must've messed up pretty bad somewhere in my lib file :( . 
            Oh yeah, it takes an input first and stores that as "N". 
            
            
 __________________________________________________________________________________________________________________________________________________________________________
 
 _________________________________________________________________________________________________________________________________________________
  
 
 
 -------------
 b_time_rec.c
 -------------
 
 
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
 
   ____________________________________________________WHAT IS B_TIME_REC.C?__________________________________________________________________________________________
   
   
    ### this C function's purpose is to benchmark the time for the recursive method of fibonacci. What it does is that it stores a constant "N" and then starts an
          epic timer along with a loop, where in i is 0 and as long as i is lower than N, i will keep adding itself. and when that crazy horsepower calculation
            ends with the help of some overkill 8 core cpu (maybe?), it will stop the timer and show the time it took for it to completely destroy that loop and 
              shows the value of N as a bonus, altho i did set N to be a small number.... But yeah, i wonder if the new Ryzen 9 could have a faster bmTime when faced with
                say an apple M1 max.... hmmmm....
                
   ________________________________________________________________________________________________________________________________________________________________    
   
   
   __________________________________________________________________________________________________________________________________________________________________________
 
 _________________________________________________________________________________________________________________________________________________
  
 
 
  -------------
 b_time_iter.c
 -------------
 
 
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
   
   
____________________________________________________WHAT IS B_TIME_ITER.C?__________________________________________________________________________________________
   
  
  
  
  ### this C function's purpose is to benchmark the time for the iterative method of fibonacci. The process is just more or less the same as the recur side,
          the only difference is that it uses fibonacci_iter(i) rather than fibonacci_recur(i) which is taken from the lib file from that include. Python imports
              are just so much easier imo.... smh...
              
              
              
 __________________________________________________________________________________________________________________________________________________________________________
 
 _________________________________________________________________________________________________________________________________________________             
  
  
  
  
   -------------
 b_space_rec.c
 -------------
  
  
  #include "mylib/mylib.h"

int main(){
	int N = 10000,x;
	
	while(1){
		x = fibonacci_rec(N);
		}
		
	return 0;
	}
  
  
 |
 |
 |
 V
  
  
  -------------
 b_space_iter.c
 -------------
  
  #include "mylib/mylib.h"

int main(){
	int N = 10000, x;
	
	while(1){
		x=fibonacci_iter(N);
		}
		
		return 0;
		
	}
  
  
  
  
  ____________________________________________________WHAT IS B_SPACE_REC.C _&__ B_SPACE_ITER.C?__________________________________________________________________________________________
  
  
  
  ### This function does not reallt return anything at all, it just stoes N at a humungous value over 90000 and it's main purpose is to store the sizes of each of
        these functions in the make file later on. But in summary, the Recursion method has more space complexity since it needs further allocations of space.... altho
          it is more simplistic... easy things just always have their down-sides 100% of the time...
          
          
  __________________________________________________________________________________________________________________________________________________________________________
 
 _________________________________________________________________________________________________________________________________________________ 
 
 
 

-------------------------
-------------------------
|                        |
|                        |
|    Makefile            |
|                        |
|                        |
 -------------------------
 -------------------------
 
 
 all: mylib.o
	gcc -o main_test.out mylib.o main_test.c

mylib.o: mylib/mylib.c
	gcc -o mylib.o -c mylib/mylib.c
	
test:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o main_test.out main_test.c mylib.o
	./main_test.out

time:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o b_time_rec.out b_time_rec.c mylib.o
	gcc -o b_time_iter.out b_time_iter.c mylib.o
	./b_time_rec.out;./b_time_iter.out
	
space:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o main_b_space_iterative.out b_space_iter.c mylib.o
	gcc -o b_space_rec.out b_space_rec.c mylib.o
	
  
  ____________________________________________________WAT? MAKEFILE?__________________________________________________________________________________________
  
  ###   Makefile is a pretty useful tool which here will let you run your different messy C files and functions in order and in one command, rather than going through
            all the trouble of one by one head-stress. The different titles in this make file all have different purposes and do as their title says.
        
        
        
        test: runs the test for the proper functioning of iterative and recursive, pretty simple, will assure if recursive and linear gives the same product by giving 
                  both their output values, along with showing the step by step workings too! epic!
                
        
        
        time: will benchmark the two methods of linear and recursive and provide results. My Linux Ubuntu@VirtualBox ran them both with the same output result tho,
                at 0.000002 seconds, maybe the terminal just wasnt showing me the decimals too specifically? 
                   ---------
        
        
        
        space: will create 2 new files called b_space_rec.out and b_space_iterative.out but my Linux still shows them both taking the same amount of storage at
                  15.896bytes, did i do something wrong? つ ◕_◕ ༽つ
  
  
  
  
 
