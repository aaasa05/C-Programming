//wap to sum all odd and even real(int) num between 1 and 10.

#include<stdio.h>
int main()
{
    int i,sum=0,sum1=0;
    for(i=1; i<=10; i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        else
        {
            sum1=sum1+i;
        }

    }
    printf("the sum is %d\n",sum);
    printf("the sum is %d\n",sum1);

    return 0;
}
