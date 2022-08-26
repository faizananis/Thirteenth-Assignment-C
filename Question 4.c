#include <stdio.h>
int squareSum(int,int);
int main()
{
    int number=0;
    int sum=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    printf("\nThe Sum of all %d Squares of Natural Numbers is: %d\n",number,squareSum(number,sum));
    return 0;
}
int squareSum(int n, int sum)
{
    if(n!=0)
    {
        sum=sum+n*n;
        squareSum(n-1,sum);
    }
    else
    {
        return sum;
    }
}
