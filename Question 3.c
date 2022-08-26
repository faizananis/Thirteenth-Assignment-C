#include <stdio.h>
int sumEven(int);
int main()
{
    int number=0;
    printf("Please Enter that how many Even Natural Numbers of Sum you want: ");
    scanf("%d",&number);
    printf("\nThe Sum of all %d Even Natural Even Numbers is: %d\n",number,sumEven(number));
    return 0;
}
int sumEven(int n)
{
    if(n>0)
    {
        return(n*2+sumEven(n-1));
    }
    else
    {
        return 0;
    }
}
