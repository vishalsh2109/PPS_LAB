#include <stdio.h>
int lcm(int num1, int num2)
{
    int gcd,remainder, numerator, denominator,lcm;
    if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num1;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    gcd = denominator;
    lcm= (num1*num2)/gcd;
    printf("LCM : %d", lcm);
}
int main()
{
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    lcm(num1,num2);
}



