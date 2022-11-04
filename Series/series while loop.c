#include<stdio.h>
void main()
{
    int sum=0,a,b;
    printf("enter first and last num: \n");
    scanf("%d%d",&a,&b);
    printf("%d + 3 + 5 + ...+ %d",a,b);
    while(a<=b)
    {
        sum=sum+a;
        a=a+2;

    }
    printf("=%d",sum);
}
