//check an integer num is palindrome or not=input 121, output 121

#include<stdio.h>
void main()
{
   int input;
   int n1;
   int temp;
   int reverse=0;
    scanf("%d",&input);

     n1=input;

    while(input>0)
    {
        temp=input%10;
        reverse=temp+(reverse*10);
        input=input/10;

    }
    if(n1==reverse)
    {
        printf("palindrome");

    }
    else
    {
        printf("not palindrome");
    }
}
