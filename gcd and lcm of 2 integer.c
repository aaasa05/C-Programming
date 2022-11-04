#include<stdio.h>
int main()
{
    int num1,num2,gcd,lcm,r,n1,n2,temp;
    scanf("%d%d",&num1,&num2);
    n1 = num1;
    n2 = num2;
    while(n2>0)
    {
        temp = n1%n2;
        n1 = n2;
        n2 = temp;

    }
    gcd = n1;
    lcm = (num1*num2)/gcd;

    printf("gcd = %d\n",gcd);
    printf("lcm = %d\n",lcm);
    return 0;

}
