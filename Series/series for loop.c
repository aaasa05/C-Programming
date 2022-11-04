#include<stdio.h>
void main()
{
    int i,num,sum=0;
    printf("enter the last num: \n");
    scanf("%d",&num);
    printf("1 + 2+ 3+ 4 +....+ %d",num);

    for(i=1;i<=num;i++)
    {
        sum=sum+i;

    }
    printf("=%d\n",sum);
}
