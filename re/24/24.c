#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char str[25];
    printf("Inputa string:");
    scanf("%[^\n]", str);
    printf("Thestring is %s\n",str);
    system("pause") ;
    return 0;
}
