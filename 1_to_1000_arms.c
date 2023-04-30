#include <stdio.h>
#include <math.h>
int main() 
{
    int num,num1,num2,n=0;
    float result = 0.0;
    for (num=1;num<=1000;num++)
    {
        num1 = num;
        while (num1 != 0) 
        {
            num1 /= 10;
            ++n;
        }
        num1 = num;
        while (num1 != 0) 
        {
            num2 = num1 % 10;
            result += pow(num2, n);
            num1 /= 10;
        }
        if (result == num)
            printf("%d is an Armstrong number", num);
    }
}