#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
           printf("%c",i+64);
          // printf("%c",j+64);
        }
        printf("\n");
    }
    return 0;
}

