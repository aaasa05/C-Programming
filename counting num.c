//counting number of a digit in an integer

#include<stdio.h>
void main()
{
    int num,count=0;
    printf("enter any integer : \n");
    scanf("%d",&num);

    while(num>0)
    {
        num=num/10;
       ++count;
    }
    printf("total number of digit:%d\n",count);


}
