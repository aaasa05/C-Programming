#include<stdio.h>
void main()
{
    int n,temp,sum=0,t,i,count=0;


    scanf("%d",&t);
    if(t>=1 && t<=10000)
    {

        for(i=1; i<=t; i++)
        {
            sum=0;
            count=0;
            scanf("%d",&n);
            if(n>=0 && n<=65535)
            {

                while(n>0)
                {
                    count++;

                    temp=n%10;

                    n=n/10;

                    if(count==1 || n==0)
                    {
                        sum+=temp;
                    }
                }
            }
            printf("sum= %d\n",sum);

        }

    }

}
