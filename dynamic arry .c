#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arry[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arry[i]);
        printf("%d ",arry[i]);
    }

       return 0;
}
