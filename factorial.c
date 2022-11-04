#include<stdio.h>
void main()
{
    int i,num,fact=1;
    printf("enter any positive num: \n");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
        fact=fact*i;//fact=1

    }

    printf("%d\n",fact);




}
