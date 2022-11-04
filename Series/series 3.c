#include<stdio.h>
void main()
{
    int n=1,n1=2,sum=0,a,b;
    printf("enter a and b: \n");
    scanf("%d%d",&a,&b);

    printf("1*2 + 4*3 +....+ %d*%d",a,b);

    while(n<=a && n1<=b)
    {
        sum=sum+ n*n1;
        n=n+3;
        n1=n1 +1;
    }
    printf(" =%d",sum);
}
