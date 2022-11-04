#include<stdio.h>

void main()
{
    int i,num,flag=0,num1=0,temp=0;
    scanf("%d",&num);
    num1=num;

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        while(num > 0)
        {
            temp = num%10;
            for(i=2; i<temp; i++)
            {
                if(temp%i==0)
                {
                    flag=1;
                    break;
                }
            }
            num = num/10;
        }
    }
    if(flag==0)
    {
        printf("%d is a Strange Number\n",num1);
    }
    else
    {
        printf("%d is not a Strange Number\n",num1);
    }
}

