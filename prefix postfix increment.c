#include<stdio.h>
int main()
{
    int x=10;
    //int y= x++;//y=10
    int y= ++x;//y=11
    printf("x=%d\n",x);
    printf("y=%d",y);
}
