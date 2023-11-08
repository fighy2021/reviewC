#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1 = 0,num2 = 0,num3 = 0,num4 = 0,num5 = 0;
    printf("請輸入5個整數：");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    printf("%d+%d+%d+%d+%d=%d\n\n", num1, num2, num3, num4, num5, num1+num2+num3+num4+num5);
    
	system("pause") ;
    return 0;
}
