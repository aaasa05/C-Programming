#include<stdio.h>
int main()
{
    int i,arry[5];
    int temp=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arry[i]);
        if(arry[i]>temp)
        {
          temp=arry[i];

        }


    }
    printf("%d ",temp);
    return 0;
}
