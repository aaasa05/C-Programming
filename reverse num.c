#include<stdio.h>
int main()
{
    int num,r,reverse=0;
    scanf("%d",&num);

    while(num>0)
    {
        r = num%10;
        reverse = reverse*10 + r;
        num = num/10;
    }
    printf("Reverse a digit: %d\n",reverse);

    return 0;
}
