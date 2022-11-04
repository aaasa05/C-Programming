//1^2 + 2^2 +....+ n^2
#include<stdio.h>
void main()
{
    int i,n,result=1;
    printf("enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result=result* i*i;
    }
    printf("%d",result);
}
