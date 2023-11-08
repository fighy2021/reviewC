#include<stdio.h>
#include <limits.h>
int main(void){	
	
	float num1 = 0;
	
	printf("Please input a floating number: ");
	scanf("%f",&num1);	
	printf("%f can be represented by %e.\n\n",num1,num1);
	
	system("pause");
	return 0;
	
}

