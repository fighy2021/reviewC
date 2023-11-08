#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num = 0;
    printf("Please input an integer: ");
    scanf("%d", &num);
    printf("Output:[%5d]\n",num);
    
    printf("Please input an integer: ");
    scanf("%d", &num);
    printf("Output:[%5d]\n\n",num);

    
	system("pause") ;
    return 0;
}
