#include <stdio.h>
float pow(float,float,float);
int main()
{
    float number=0;
    float power=0;
    float num=1;
    float result=0;
    printf("Please Enter a Number: ");
    scanf("%f",&number);
    printf("Please Enter a Power of a given Number %f: ",number);
    scanf("%f",&power);
    result=pow(number,power,num);
    printf("\nThe Result of a given Number %f with the Power %f is: %f\n",number,power,result);
    return 0;
}
float pow(float n, float p,float num)
{
    if(p==0)
    {
        return num;
    }
    else
    {
        num=num*n;
        pow(n,p-1,num);
    }
}
