#include<stdio.h>
void main()
{
    int i,n,num,temp,sum=0,fact;
    printf("enter any num: \n");
    scanf("%d",&num);

    n=num;
    while(num>0)
    {
        fact=1;
        temp=num%10;
        for(i=1; i<=temp; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }
    if(n==sum)
    {
        printf("strong num",n);
    }
    else
    {
        printf("not strong",n);
    }
}
