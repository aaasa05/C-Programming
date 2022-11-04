/**wap to read 2 integer and find large numbers**/

#include<stdio.h>
void main()
{
   int a,b,large;
   printf("enter two numbers: ");
   scanf("%d %d",&a,&b);

   large=a>b?a:b;
   printf("large=%d",large);


}
