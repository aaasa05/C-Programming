#include<stdio.h>
void main()
{
    int i,sum=0;
    //scanf("%d",&n);
    printf("1+3+5+7+....+12\n");
    for(i=1;i<=12;i=i+2)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
