#include<stdio.h>
void main()
{
    int num,temp,n,sum=0;
    printf("enter any num: \n");
    scanf("%d",&num);
    n=num;
    while(num>0)
    {
        temp=num%10;
        sum=sum+(temp*temp*temp);
        num=num/10;
    }
    if(n==sum)
    {
        printf("armstrong num");

    }
    else
    {
        printf("not armstrong");
    }

}
