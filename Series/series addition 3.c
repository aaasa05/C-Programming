#include<stdio.h>
void main()
{
    int i=2,sum=0,n;
    scanf("%d",&n);
    printf("2+5+8+...+%d\n",n);
    while(i<=n)
    {
        sum=sum+i;
        i=i+3;
    }
    printf("%d",sum);
}
