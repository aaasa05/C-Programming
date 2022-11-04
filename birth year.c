#include<stdio.h>
int main()
{
int a=0;
int b=0;
int c=0;

printf("Please give your birth year?\n");
scanf("%d",&a);
printf("Please give your current year?\n");
scanf("%d",&b);

c=b-a;
printf("Your age is %d",c);

return 0;
}
