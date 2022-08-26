#include <stdio.h>
int sumN(int,int);
int main()
{
    int number=0;
    int sum=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    sum=sumN(number,sum);
    printf("\nThe Sum of all %d Natural Numbers is: %d\n",number,sum);
    return 0;
}
int sumN(int n,int sum)
{
    sum=sum+n;
    if(n!=0)
    {
        sum=sum+sumN(n-1,sum);
    }
    else
    {
        return sum;
    }
}
