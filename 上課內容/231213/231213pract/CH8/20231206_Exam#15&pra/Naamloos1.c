#include<stdio.h>
#include<stdlib.h> 
#include<C:\Users\User\Desktop\�s�W��Ƨ�\my_math.h> 


int main(void){
	int n;
	float num1, num2;
	
	
	printf("\n  �п�J��� n = ? ");
	scanf("%d",&n);
	printf("\n  SQUARE ( %d ) = %d\n", n, SQUARE(n));
	printf("  CUBIC ( %d ) = %d\n", n, CUBIC(n));
	printf("  ABS ( %d ) = %d\n", n, ABS(n));
	
	printf("\n  �п�J�B�I�� num1 = ? ");
	scanf("%f",&num1);
	printf("  �п�J�B�I�� num2 = ? ");
	scanf("%f",&num2);
	printf("\n  AVERAGE ( %.2f, %.2f) = %.2f\n", num1, num2, AVERAGE(num1,num2));
	printf("  RPODUCT ( %2f, %.2f) = %.2f\n\n  ", num1, num2, RPODUCT(num1,num2));

	system("pause");
	return 0;
}
