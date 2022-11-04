#include<stdio.h>
int main()
{
    int num,r,temp,n;
    scanf("%d",&num);
    n=num;
    while(num>0)
    {
        r = num%10;
        temp = temp + r*r*r;
        num = num/10;
    }
    if(n==temp)
    {
        printf("%d is an Armstrong number",temp);
    }
    else
    {
        printf("%d is not an Armstrong number",n);
    }
    return 0;
}
