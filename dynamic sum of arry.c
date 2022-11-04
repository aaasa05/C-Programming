#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,sum=0,arry[n];

    for(i=0; i<n; i++)
    {
        if(i>0 && i<n)
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

