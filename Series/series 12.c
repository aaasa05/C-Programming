//1 + 1/2 + 1/3 +... + 1/n

#include<stdio.h>
void main()
{
   double i,n,sum=0;
  printf("enter n: ");
  scanf("%lf",&n);

 for(i=1;i<=n;i++)
  {
      if(i==1)
      {
          sum=sum+i;
          printf("\n 1 + ",i);

      }

      else
      {
          sum=sum+(1/i);
          printf(" 1/.0lf+ \n",i);
      }

      printf(" = %.0lf",sum);

  }



}
