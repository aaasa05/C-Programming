#include<stdio.h>
int main()
{
    int i,arry[5];
    int temp;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arry[i]);
        if(arry[i]<temp)
        {
          temp=arry[i];

        }


    }
    printf(" smallest  = %d ",temp);
    return 0;
}

