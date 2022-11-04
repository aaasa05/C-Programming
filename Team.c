#include<stdio.h>
int main()
{
    int n,count = 0;
    scanf("%d",&n);

    if(n>=1 && n<=1000)
    {

        while(n>0)
        {
            int p,v,t,temp=0;
            scanf("%d%d%d",&p,&v,&t);
            if(p==1)
            {
                temp++;
            }
            if(v==1)
            {
                temp++;
            }
            if(t==1)
            {
                temp++;
            }
            if(temp>=2)
            {

                count++;
            }
            n--;
        }


    }

    printf("%d ",count);

    return 0;
}

