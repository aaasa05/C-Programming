//sum= 1-2 + 3-4 + 5-6 +...
//sum= (1+3+5+..)-(2+4+6+..)

#include<stdio.h>
void main()
{
    int i,n,even=0,odd=0;
    printf("enter the last term: ");
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

    printf("sum of odd num: %d\n",odd);
    printf("sum of even num: %d\n",even);

    printf("sum=%d\n",odd-even);

}
