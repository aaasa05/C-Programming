#include<stdio.h>
void main()
{
int n ,num;
int temp=0;
int reverse=0;
    printf("enter any num: \n");
    scanf("%d",&num);
n=num;
    while(num>0)
    {
        temp=num%10;
        reverse=(reverse*10)+temp;
        num=num/10;
    }
    if(reverse==n)
    {
        printf("palindrome");
    }
    else
        {
            printf("not palindrome");
                }
}
