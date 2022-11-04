#include<stdio.h>
void main()
{
    int n1,n2,r,gcd;

    scanf("%d %d",&n1,&n2);

    while(n2>0)
    {
        r=n1%n2;
        n1=n2;
        n2=r;

    }
    gcd=n1;
    printf("%d\n",gcd);
}
