#include<stdio.h>
void main()
{
   int n1,n2,sum=0,i,a=1,b=2;
   printf("enter n1 and n2: \n");
   scanf("%d%d",&n1,&n2);
   printf("1*2 + 3*3 + 5*4 +...+ %d*%d",n1,n2);
   for(a=1,b=2;a<=n1 && b<=n2;a=a+2,b++)
   {
       sum=sum+ a*b;
   }
   printf("=%d\n",sum);
}
