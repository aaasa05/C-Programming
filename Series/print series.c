// 1 + 1/2 + 1/3 +.....+ 1/n
#include<stdio.h>
void main()
{
    double i,n,sum=0;
    printf("enter n: ");
    scanf("%lf",&n);

    for(i=1; i<=n; i++)
    {

        if(i==1)
        {

            printf("\n1 ");
        }
        else
        {

            printf("1/%.0lf ",i);
        }
        if(i<n)
        {
            printf("+ ");
        }
    }


}

