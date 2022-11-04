#include<stdio.h>
void main()
{
    int i,j,k,t,n;
    scanf("%d",&t);

    if(t>=1)
    {

        for(i=1; i<=t; i++)
        {
            scanf("%d",&n);

            for(j=1; j<=n; j++)
            {
                for(k=1; k<=n; k++)
                {
                    printf ("*");
                }
                printf("\n");
            }
        }
    }
}
