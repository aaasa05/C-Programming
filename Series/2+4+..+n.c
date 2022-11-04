//2+4+6+...+n
#include<stdio.h>
void main()
{
    int sum=0,n;
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2)
    {
        printf("%d ",i);
        sum=sum+i;
    }
    printf("\nsum=%d",sum);
}
