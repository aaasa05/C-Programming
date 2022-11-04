#include<stdio.h>

void main()
{
  int i,n,num,temp,fact=1,sum=0;
    printf("enter any number: \n");
    scanf("%d",&num);
    n=num;

    while(num>0)
    {
        fact=1;
        temp=num%10;

        for(i=1;i<=temp;i++)
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
