#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            //printf("%c",i+96);
            printf("%c",j+96);
        }
        printf("\n");
    }
    return 0;
}
