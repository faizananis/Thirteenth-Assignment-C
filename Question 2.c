#include <stdio.h>
int sumOdd(int,int);
int main()
{
    int number=0;
    int sum=0;
    printf("Please Enter that how many Odd Numbers of Sum you want: ");
    scanf("%d",&number);
    printf("\nThe Sum of all %d Odd Natural Numbers is: %d\n",number,sumOdd(number,sum));
    return 0;
}
int sumOdd(int n, int sum)
{
    if(n!=0)
    {
        sum=sum+n*2-1;
        sumOdd(n-1,sum);
    }
    else
    {
        return sum;
    }
}
