#include<stdio.h>
void main()
{
    int num,sum=0;
        printf(" the given num is perfect or not %d",num);
        scanf("%d",&num);
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }

    if((num==sum)&&(num>0))
    {
        printf(" given is  perfect %d" ,num);
    }
    else
    {
        printf(" given num not perfect %d",num);
    }

}
