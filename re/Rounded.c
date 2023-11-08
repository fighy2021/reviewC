#include <stdio.h>
#include <math.h>

int main() {
    double num1 = 0, num2 = 0, num3 = 0;
//    double rnum1 = round(num1), rnum2 = round(num2), rnum3 = round(num3);
    
    printf("Floating point number:");
    scanf("%lf",&num1);
    printf("The rounded value is %lf.\n\n",round(num1));
    
    printf("Floating point number:");
    scanf("%lf",&num2);
    printf("The rounded value is %lf.\n\n",round(num2));
    
    printf("Floating point number:");
    scanf("%lf",&num3);
    printf("The rounded value is %lf.\n\n",round(num3));
    
    
    
    return 0;
}

