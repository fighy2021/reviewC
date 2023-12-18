#include<stdio.h>
#include<stdlib.h>

double square(double x);

int main(void){
	double i = 0.0;
	printf("num = ? ");
	scanf("%lf",&i);	
	
	printf("\n ans = %lf\n\n", square(i) );

	system("pause");
	return 0;	
}

double square(double x){
	return x*x;
}

