//1^3+3^3+5^3+...+n^3
#include<stdio.h>
void main()
{
   int i,n,sum=0;
   scanf("%d",&n);
   for(i=1;i<=n;i=i+2)
   {
       sum+= i*i*i;
   }
   printf("%d",sum);


}
