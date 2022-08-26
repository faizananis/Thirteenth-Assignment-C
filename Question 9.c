#include <stdio.h>
int countDigit(int,int);
int main()
{
    int number=0;
    int result=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    result=countDigit(number,result);
    printf("\nThere are %d Digits in the given Number which is %d.\n",result,number);
    return 0;
}
int countDigit(int n,int i)
{
    if(n!=0)
    {
        countDigit(n/10,i+1);
    }
    else
    {
        return i;
    }
}
