#include<stdio.h>
void main()
{
    int i,num,flag=0;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("num is prime:");
    }

    else
    {
        printf("num is not prime:");
    }

}
