#include<stdio.h>
int main()
{
    int n,i,t,j;

    scanf("%d",&t);

    if(t>=1 && t<=3)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d",&n);
            printf("Case %d: ",i);
            for(j=1; j<=n; j++)
            {
                if(n%j==0)
                {
                    printf("%d",j);
                }
                if(n%j==0 && j<n)
                {
                    printf(",");
                }

            }
            printf("\n");
        }
    }

    return 0;
}
