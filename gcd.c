#include<stdio.h>
int main()
{
    int num1,num2,a,b,rem,gcd;
    printf("enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    a=num1;
    b=num2;
    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    gcd=a;
    printf("gcd=%d",gcd);







}
