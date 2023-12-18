#include<stdio.h>
#include<stdlib.h>

int power(int x, int n);


int main(void){
	int i = 0, j = 0;
	printf("\n x ^ n\n\n");
	
	printf(" x = ? ");
	scanf("%d",&i);	
	
	printf(" n = ? ");
	scanf("%d",&j);
	
	printf("\n %d ^ %d = %d\n\n", i, j, power(i, j) );

	system("pause");
	return 0;	
}

int power(int x, int n){
	int a = 1;
	for(int k = 1; k <= n; k++){
		a = a * x;
	}
	return a;
}

