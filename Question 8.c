#include <stdio.h>
void fibonacci(int,int,int,int);
int main()
{
    int number=0;
    int a=-1, b=1, c=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    printf("\n");
    fibonacci(a,b,c,number);
    printf("\n");
    return 0;
}
void fibonacci(int a,int b,int c,int n)
{
    if(n!=0)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        fibonacci(a,b,c,n-1);
    }
}
