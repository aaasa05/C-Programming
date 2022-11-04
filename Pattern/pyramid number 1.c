#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter n: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {

        //printing space
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }


        // printing number
        for(j=1; j<=i; j++)
        {
            printf("%d ",j);
        }


        printf("\n");
    }
}
