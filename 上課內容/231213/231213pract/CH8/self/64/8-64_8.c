#include<stdio.h>
#include<stdlib.h>

double f(double x);

int main(void){
	
	printf("\n f (-3.2) = %lf\n\n", f(-3.2) );
	printf("\n f (-2.1) = %lf\n\n", f(-2.1) );
	printf("\n f ( 0 ) = %lf\n\n", f(0) );
	printf("\n f (2.1) = %lf\n\n", f(2.1) );

	system("pause");
	return 0;	
}

double f(double x){
	double ans;
	ans = 3*(x*x*x) + 2*x - 1;
	return ans;
}

