#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("enter the last number of the series: \n");
    scanf("%d",&n);

    printf("1+2+3+....+%d\n",n);
for(i=1;i<=n;i++)
{
    sum=sum+i;
}
printf("%d",sum);

}
