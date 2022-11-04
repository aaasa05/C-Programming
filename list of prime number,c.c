#include<stdio.h>

void main()
{
    int i,j, flag=0;

    for(i=1;i<=100; i++)
    {
        flag=0;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",i);
        }
    }

}
