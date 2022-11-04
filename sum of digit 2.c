#include<stdio.h>
void main()
{
    int num,temp,sum=0;

    scanf("%d",&num);

    while(num>0)
    {
        temp=num%10;
        sum=sum+temp;
        num=num/10;
    }
    printf("sum of digits:%d\n",sum);
}
