#include <stdio.h>
int hcf(int,int,int,int);
int main()
{
    int num1=0;
    int num2=0;
    int i=1;
    int result=0;
    printf("Please Enter a First Number: ");
    scanf("%d",&num1);
    printf("Please Enter a Second Number: ");
    scanf("%d",&num2);
    result=hcf(num1,num2,i,result);
    printf("\nThe HCF of given Two Numbers %d and %d is: %d\n",num1,num2,result);
    return 0;
}
int hcf(int n1, int n2, int i,int factor)
{
    if(i<=n1&&i<=n2)
    {
        if(n1%i==0&&n2%i==0)
        {
            factor=i;
        }
        i++;
        hcf(n1,n2,i,factor);
    }
    else
    {
        return factor;
    }
}
