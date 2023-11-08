#include<stdio.h>
#include <limits.h>
int main(void){	
	
	int num1 = 0, num2 = 0;
	
	printf("Please input an integer: ");
	scanf("%d",&num1);	
	printf("Decimal(%d)=Hexadecimal(%x).\n",num1,num1);
	
	printf("Please input an octal: ");
	scanf("%o",&num2);	
	printf("Octal(%o)=Hexadecimal(%x).\n",num2,num2);
	
	system("pause");
	return 0;
	
}

