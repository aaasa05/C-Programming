#include<stdio.h>
int main()
{
    int num,reverse=0,r,n;
    scanf("%d",&num);
    n = num;
    while(num>0)
    {
      r = num%10;
      reverse = reverse*10 + r;
      num = num/10;
    }
    if(n == reverse)
    {
        printf("It is palindrome\n");
    }
    else
    {
        printf("It is not palindrome\n");
    }
    return 0;
}
