#include<stdio.h>
void main()
{
    int num,n,temp,sum=0;
    scanf("%d",&num);

    n=num;
    while(num>0)
    {
        temp=num%10;
        sum=sum+(temp*temp*temp);
        num=num/10;
    }
        if(n==sum)
            printf("armstrong");
        else
            printf("not armstrong");





}
