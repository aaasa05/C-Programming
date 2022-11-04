//1.5+2.5+3.5+...+n
#include<stdio.h>
void main()
{
    float n,i,sum=0;
    printf("enter n: ");
    scanf("%f",&n);
    for(i=1.5;i<=n;i++)
    {
        printf("%.1f ",i);
        sum=sum+i;

    }
    printf("\n%.1f",sum);
}
