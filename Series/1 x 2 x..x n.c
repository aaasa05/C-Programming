// 1 x 2 x 3 x....x n
#include<stdio.h>
void main()
{
    int i,n,result=1;
    printf("enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result=result*i;
    }
    printf("%d",result);
}
