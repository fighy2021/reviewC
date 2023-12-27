/* prog10_12, 由函數傳回指標  */
#include <stdio.h>
#include <stdlib.h>
int *sum(int *);		/* 宣告函數max()的原型 */


int main(void)
{
   int num,a=12,b=17,*num1;
   
   printf("  請輸入一個正整數 n：");
   scanf("%d",&num);
   num1 = sum(&num);
   if(num%2==0)
		printf("  1/2+1/4+...+1/%d = ",num);
	else
		printf("  1/1+1/3+...+1/%d = ",num);
   printf("%d\n",*num1);
   
   system("pause");
   return 0;
}

int *sum(int *p1){
	int num;
	num = p1;
	if(*p1<=2){
		return (1/ *p1);
	}
	else{
		return ( 1/ *p1+sum( *p1-2) );
	}
}
