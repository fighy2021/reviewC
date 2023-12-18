#include<stdio.h>
#include<stdlib.h> 
int fib(int);
int q;

int main(void){
	for(int i = 1; i <= 30; i++){
		q = 0;
		printf(" n=%d, for°j°é%d¦¸,»¼°j%d¦¸\n", i, i, fib(i));
	}
	
	system("pause");
	return 0;
}
int fib(int n){
	int y;
	q++;
	if(n == 1||n == 2){		
		y = 1;
		return q;
	}
		
	else{
		y = (fib(n-1) + fib(n-2));
		return q;
	}	
}

