#include<stdio.h>
int main()
{
    int i,X;
    if(i>=1 && i<=1000)
    {
        scanf("%d",&X);
        for(i=1; i<=X; i++)
        {
            if(i%2!=0)
            {
                printf("%d\n",i);
            }
        }
    }
}
