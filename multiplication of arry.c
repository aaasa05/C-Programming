#include<stdio.h>
int main()
{
    int i,result=1,arry[6];
    for(i=0;i<6;i++)
    {
        if(i>0 && i<6)
        {
            printf("* ");
        }
        scanf("%d",&arry[i]);
        result=result*arry[i];
        printf("%d ",arry[i]);
    }
    printf(" = %d ",result);
    return 0;
}
