#include<stdio.h>
void main()
{
    int i,n;
    float sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            sum=sum+i;
            printf("\n1");
        }
        else
        {
            sum=sum+ (1/(float)i);
            printf("1/%d",i);
        }
        if(i<n)
        {
            printf(" + ");
        }
    }
    printf(" = %.1f\n",sum);
}
