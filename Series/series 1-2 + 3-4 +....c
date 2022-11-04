#include<stdio.h>
void main()
{
    int n,i,even=0,odd=0;
    printf("enter n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            even=even+i;
        }
        else
        {
            odd=odd+i;
        }
         i++;


    }
     printf("%d\n",odd-even);
}
