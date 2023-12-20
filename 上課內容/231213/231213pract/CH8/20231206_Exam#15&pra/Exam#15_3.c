#include<stdio.h>
#include<stdlib.h> 
#define AVERAGE(X,Y) ((X)+(Y))/2


int main(void){
	printf("\n  AVERAGE ( %.2f, %.2f) = %.2f\n\n  ", 12.6, 4.2, AVERAGE(12.6, 4.2));

	system("pause");
	return 0;
}
