//wap that read some numbers and take minimum
#include<stdio.h>
int main()
{
    int i,temp=2147483647,aa[5];

    for(i=0;i<5;i++)
    {
        scanf("%d",&aa[i]);
        if(temp>aa[i])
        {
            temp=aa[i];
        }

    }
    printf("min = %d\n",temp);
}
