#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",i+96);
           //printf("%c",j+64);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
           printf("%c",i+64);
            //printf("%c",j+64);
        }
        printf("\n");
    }
    return 0;
}

