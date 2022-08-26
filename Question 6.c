#include <stdio.h>
int factorial(int,int);
int main()
{
    int number=0;
    int result=1;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    result=factorial(number,result);
    printf("\nThe Factorial of a Given Number %d is: %d\n",number,result);
    return 0;
}
int factorial(int n,int fact)
{
    if(n!=0)
    {
        fact=fact*n;
        factorial(n-1,fact);
    }
    else
    {
        return fact;
    }
}

