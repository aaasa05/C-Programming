#include<stdio.h>
int main()
{
    int i,arry[5],sum=0;
    for(i=0;i<5;i++)
    {
       scanf("%d",&arry[i]);
       sum = sum+arry[i];
    }
    printf("Sum of array is %d ",sum);

    return 0;
}
