#include<stdio.h>
void main()
{
    int n1,n2,n3,a=1,b=2,c=3,sum=0;
    printf("enter n1 ,n2 and n3: \n");
    scanf("%d%d%d",&n1,&n2,&n3);
    printf("1*2*3 + 2*4*5 + 3*6*7 +...+ %d*%d*%d",n1,n2,n3);


    while(a<=n1 && b<=n2 && c<=n3)
    {
        sum=sum+ a*b*c;
        a=a+1;
        b=b+2;
        c=c+2;

    }
    printf("=%d",sum);
}
