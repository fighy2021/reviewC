#include<stdio.h> 
#include<stdlib.h>

int main (void){
	int A[5] = { 74, 48, 30, 17, 62};
	int i, min, minl, max, maxl;
	max = min = A[0];
	maxl = minl = 0;
	
	for(i = 0; i < 5; i++){
		if(max < A[i]){
			max = A[i];
			maxl = i;
		}
		if(A[i] < min){
			min = A[i];
			minl = i;
		}
	}
	
	printf("\n  the max is number %d, %02d", max, ++maxl);	
	printf("\n  the min is number %d, %02d\n\n  ", min, ++minl);	
	
	system("pause");
	return 0; 
} 
