#include<stdio.h>
int main()
{
    int i,n,fact=1;
    scanf("%d",&n);
    if(n>0 && n<13)
    {
        for(i=1; i<=n; i++)
        {
            fact = fact*i;
        }
        printf("%d\n",fact);
    }

    return 0;
}
