#include<stdio.h>
void main()
{
    int num;
    printf("enter any number: ");
    scanf("%d",&num);

    if(num>0)
    {
        printf("positive:%d",num);

    }
    else if(num<0)
    {
        printf("negative:%d",num);

    }
    else
        {
          printf("zero");
        }




}

