#include<stdio.h>
int main()
{
    int i,arry[5],sum=0;
    for(i=0;i<5;i++)
    {
        if(i>0 && i<5)
        {
            printf("+ ");
        }
        scanf("%d",&arry[i]);
        sum=sum+arry[i];
        printf("%d ",arry[i]);
    }
    printf(" = %d ",sum);
    return 0;
}

