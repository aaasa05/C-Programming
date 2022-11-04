#include<stdio.h>
int main()
{
    int i,r,n,x,sum=0;
    scanf("%d",&n);
    if(n>=1 && n<=100)
    {
        while(n>0)
        {
            scanf("%d",&x);
          if(x>=1 && x<=100000000)
          {
            for(i=1;i<=x;i++)
            {
              r = x%i;
              if(r==0)
              {
                  sum = sum+i;
              }
            }
            printf("%d ",sum);
          }
          n--;

        }
    }
    return 0;
}
