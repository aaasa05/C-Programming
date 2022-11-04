#include<stdio.h>
int main()
{
    int i,arry[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&arry[i]);
        if(arry[i]%2!=0)
        {
            printf("%d ",arry[i]);
        }
    }
    return 0;
}

