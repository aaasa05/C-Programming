#include<stdio.h>
void main()
{
    int  num,i,sum=0;
    printf("perfect or not %d",num);
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
        if((sum==num)&&(num>0))
        {
             printf("perfect num %d ",num);
        }
        else
        {
           printf("not perfect %d",num);
        }


}
