//input 2 numbers and find the largest num
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a,b:");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("a is large num=%d\n",a);
    else if(a<b)
      printf("b is large=%d",b);

    else
    printf("a and b is equal");



}
