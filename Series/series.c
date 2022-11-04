#include<stdio.h>
void main()
{
    int i,sum=0,num;
    printf("enter the last num: \n");
    scanf("%d",&num);
    //printf("20-18-16-...- %d",num);
    for(i=20;i>=num;i=i-2)
    {
        printf("-%d",i);
        sum=sum+i;
    }
    printf("=%d",sum);
}
