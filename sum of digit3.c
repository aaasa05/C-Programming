#include<stdio.h>
void main()
{
    int num,temp,sum=0;
    printf("enter any num: \n");
    scanf("%d",&num);

    while(num>0)
    {
       temp=num%10;
       sum=sum+temp;
       num=num/10;
    }
    printf("%d\n",sum);
}
