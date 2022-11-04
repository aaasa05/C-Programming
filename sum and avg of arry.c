//wap that read 5 numbers and display their sum and avg
#include<stdio.h>
int main()
{
    int i,n,sum=0,arry[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arry[i]);
        sum=sum+arry[i];

    }
    printf("sum = %d\n",sum);
    printf("avg = %.2f\n",(float)sum/n);
}
