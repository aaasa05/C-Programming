#include<stdio.h>
void main()
{
    int n1,n2,n3,sum=0,a=1,b=2,c=3;
    printf("enter n1 n2 and n3: \n");
    scanf("%d%d%d",&n1,&n2,&n3);

    printf("1*2*3 + 3*3*4 + 5*4*5 +....+ %d*%d*%d ",n1,n2,n3);
    for(a=1,b=2,c=3;a<=n1 && b<=n2 && c<=n3;a=a+2,b++,c++)
    {
        sum=sum+ a*b*c;

    }
    printf("=%d\n",sum);
}
