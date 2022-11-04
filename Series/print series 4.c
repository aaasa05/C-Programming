#include<stdio.h>
void main()
{
    double i,n,sum=0;
    printf("enter n: ");
    scanf("%lf",&n);

    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            sum=sum+i;
            printf("\n1");
        }
        else
        {
            sum=sum+(1/i);
            printf("1/%.0lf",i);
        }
        if(i<n)
        {
            printf(" + ");
        }
    }
    printf(" = %.1lf\n",sum);
}
