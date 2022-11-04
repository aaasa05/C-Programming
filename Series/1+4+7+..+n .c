//1+4+7...+n
#include<stdio.h>
void main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+3)
    {
      printf("%d ",i);
      sum=sum+i;
    }
    printf("\n=%d",sum);
}
