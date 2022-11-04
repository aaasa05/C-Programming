//0 1 1 2 3 5 8 13..
#include<stdio.h>
void main()
{
    int n,count=0,fibo,first=0,second=1;
    printf("enter n: ");
    scanf("%d",&n);
    while(count<=n)
    {
        if(count<=1)
        {
           fibo=count;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d ",fibo);
        count++;
    }

}
