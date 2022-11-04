//1+2+3...+n
#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum=sum+i;

    }
    printf("\nsum=%d ",sum);


}
