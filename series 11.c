//1 + 1/2 + 1/3 +....+ 1/n

#include<stdio.h>
void main()
{
    double n,i,sum=0;
    printf("enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            sum=sum+i;
            printf(" \n 1 + ",i);
        }
        else
        {
            sum=sum+(1/i);
            printf("1/%.1lf + \n",i);
        }
        printf("=%.1lf \n",sum);
    }

}
