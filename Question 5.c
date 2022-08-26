#include <stdio.h>
int sumDigit(int,int);
int main()
{
    int number=0;
    int sum=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    sum=sumDigit(number,sum);
    printf("\nThe Sum of all Digits of a given Number %d is: %d\n",number,sum);
    return 0;
}
int sumDigit(int n, int sum)
{
    if(n!=0)
    {
        sum=sum+n%10;
        sumDigit(n/10,sum);
    }
    else
    {
        return sum;
    }
}
