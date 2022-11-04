#include<stdio.h>
void main()
{
    int even=0,odd=0,n,i;
    printf("enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even=even+i;
        }
        else
        {
            odd=odd+i;
        }

    }
    printf("%d\n",odd-even);
}
