//how to swap two numbers without temporary variable
#include<stdio.h>
int main()
{
    int a=10;
    int b=15;
    a=a-b;//-5
    b=a+b;//10
    a=b-a;//15
    printf("a=%d\n",a);
    printf("b=%d\n",b);



}
