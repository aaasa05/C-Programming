#include<stdio.h>
void main()
{
    int i=2,n,result=0;
    printf("enter n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        result=result + i*i;
        i=i+2;
    }
    printf("%d",result);
}

