// 1 + 1/2 + 1/3 +....+ 1/n
#include<stdio.h>
void main()
{
    float i,n,sum=0;
    printf("enter n: ");
    scanf("%f",&n);

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
            printf("1/%.0f",i);
        }
        if(i<n)
        {
            printf("+ ");
        }


    }
 printf(" = %.1f\n",sum);

}
