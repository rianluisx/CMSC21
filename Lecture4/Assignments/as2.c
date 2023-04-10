#include <stdio.h>

void task1(){
	printf("\n");

	int i = 1;
	while (i < 10){
		printf("%d ", i);

	i++;
	}

	printf("\n");
}

void task2(){

	int  i = 1;
	for (; i < 10; i++){
		printf("%d ", i);
	}

	printf("\n");
}

void task3(){

	int i = 1;
	do{
		printf("%d ", i);
		i++;


	}while (i<10);

	printf("\n");

}

	
int main(){
	task1();
	task2();
	task3();
}

// ALL produces the same output, however the do while loop checks condition at the end of iteration.
// While the for loop and while loop checks it at the start.