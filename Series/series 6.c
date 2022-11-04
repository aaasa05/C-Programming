#include<stdio.h>
void main()
{
    int i,sum=0;
    //printf("1+2+3+...+5");
    for(i=1; i<=5; i++)
    {
        sum=sum+i;
        printf("+%d",sum);

    }
}
