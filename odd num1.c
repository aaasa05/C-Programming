#include<stdio.h>
int main()
{
    int i,X;
    scanf("%d",&X);
    if(X>=1 && X<=1000)
    {

        for(i=1; i<=X; i++)
        {
            if(i%2!=0)
            {
                printf("%d\n",i);
            }
        }
    }
}
