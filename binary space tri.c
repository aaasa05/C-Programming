#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
           // printf("%d",i%2);
          // printf("%d",j%2);
         // printf("%c",i+96);
         printf("%c",j+96);
        }
        printf("\n");
    }
    return 0;
}
