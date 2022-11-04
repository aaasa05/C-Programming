#include<stdio.h>
void main()
{
    int a,flag;
    scanf("%d",&a);
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
        flag=1;
        break;
        }
    }
    if(flag==0)
    {
        printf(" prime num");
    }
    else
        {
        printf(" not prime");

        }
}
