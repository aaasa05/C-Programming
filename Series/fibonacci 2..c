#include<stdio.h>
void main()
{
int n,flag=0,first=0,second=1,fibo;
printf("enter n: ");
scanf("%d",&n);
while(flag<=n)
{

  if(flag<=1)
  {
     fibo=flag;
  }
  else
  {
      fibo=first+second;
      first=second;
      second=fibo;
  }
  printf("%d ",fibo);
  flag++;
}

}
