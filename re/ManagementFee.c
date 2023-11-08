#include <stdio.h>
#include <math.h>

int main() {
    double num1 = 0, num2 = 0;
//    double rnum1 = round(num1), rnum2 = round(num2), rnum3 = round(num3);
    
    printf("How big is your apartment:");
    scanf("%lf",&num1);
    printf("Your management fee is %lf.\n\n",((num1*12*50)-(num1*3.3058*120))/12);
    
    printf("How big is your apartment:");
    scanf("%lf",&num2);
    printf("Your management fee is %lf.\n\n",((num2*12*50)-(num2*3.3058*120))/12);
    
    
    
    return 0;
}

