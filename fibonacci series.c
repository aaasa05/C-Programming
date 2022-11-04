#include<stdio.h>
int main()
{
    int fibo,first=0,second=1,n,count=0;
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

        count++;
    }
    printf("%d ",fibo);
    return 0;
}
