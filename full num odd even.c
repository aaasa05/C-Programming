#include<stdio.h>

void main()
{
    int i,num,t;
    scanf("%d",&t);
    if(t>=1 && t<=10)
    {
    for(i=1; i<=t; i++)
        {
          scanf("%d",&num);
    if(num>=0 && num<=5000)
        {
        if(num%2==0)
        {
          printf("even\n");
        }
        else
        {
          printf("odd\n");
        }
        }
        }
    }
}

