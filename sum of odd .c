#include<stdio.h>

void main()
{
    int i,sum=0,n,m;

    printf("Please enter range\n");
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(i%2!=0)
        {
            sum+=i;

        }

    }
    printf("Sum of ODD Number %d",sum);
}
