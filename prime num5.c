#include<stdio.h>
int main()
{
    int x,i,n,flag=0;
    scanf("%d",&n);
    if(n>=1 && n<=100)
    {
        while(n>0) {
            flag =0;
            scanf("%d",&x);
            for(i=2; i<x; i++)
            {
                if(x%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(x == 1) {
                flag = 1;
            }
            if(flag==0)
            {
                printf("%d eh primo\n",x);
            }
            else
            {
                printf("%d nao eh primo\n",x);
            }

            n--;
        }

    }
    return 0;
}
