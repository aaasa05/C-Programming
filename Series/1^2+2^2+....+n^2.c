//1^2+2^2+3^2+...+n^2
#include<stdio.h>
void main()
{
   int i,n,sum=0;
   printf("enter n: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       printf("%d ",i);
       sum=sum+ i*i;
   }
   printf("\n%d",sum);
}
