#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    scanf("%d",&n);

    for(i=i;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",++count);
        }
        printf("\n");
    }
    return 0;
}
