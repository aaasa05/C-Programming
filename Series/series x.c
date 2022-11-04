//1 x 2 x....x n
#include<stdio.h>
void main()
{
    int i,n,sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      sum=sum * i;

    }
    printf("%d ",sum);
}

