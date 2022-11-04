#include<stdio.h>
void main()
{
    int num,i,flag=0;
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)

        {
            flag=1;
            break;
        }
    }
        if(flag==0)
        {
            printf(" prime %d",num);
        }
        else
        {
            printf("not prime %d",num);
        }
}
