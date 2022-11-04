#include<stdio.h>
void main()
{
    int num;
    int temp=0;
    int reverse=0;

    printf("enter any num: \n");
    scanf("%d",&num);

    while(num>0)
    {
        temp=num%10;
        reverse=temp+(reverse*10);
        num=num/10;
    }
    printf("%d",reverse);
}
