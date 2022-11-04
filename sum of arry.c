#include<stdio.h>
void main()
{
    int array[5],sum=0;
    printf("enter 5 number:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<5;i++)
    {
       sum=sum+array[i];

       // printf("%d",array[i]);
    }

       printf("%d",sum);
}
