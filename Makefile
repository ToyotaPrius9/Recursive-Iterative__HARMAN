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
	
	
