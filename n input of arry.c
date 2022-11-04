
#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int arry[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arry[i]);
        printf("%d ",arry[i]);
    }
    return 0;
}
