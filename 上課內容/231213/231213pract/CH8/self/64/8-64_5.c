#include<stdio.h>
#include<stdlib.h>

int mod(int x, int y);


int main(void){
	int i = 0, j = 0;
	printf("\n x %% y\n\n");
	
	printf(" x = ? ");
	scanf("%d",&i);	
	
	printf(" y = ? ");
	scanf("%d",&j);
	
	printf("\n %d %% %d = %d\n\n", i, j, mod(i, j) );

	system("pause");
	return 0;	
}

int mod(int x, int y){
	return x%y;
}

