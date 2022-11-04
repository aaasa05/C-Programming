#include<stdio.h>
void main()
{
    int num1,num2,rem,gcd;

    printf("enter two num: \n");
    scanf("%d%d",&num1,&num2);




    while(num2!=0)
    {
       rem=num1%num2;
       num1=num2;
       num2=rem;
    }
    gcd=num1;
     printf("%d\n",gcd);
}
