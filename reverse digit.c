/**reverse a digit**/

#include<stdio.h>
void main()
{
    int input= 0;
    int temp=0;
    int reverse=0;
        scanf("%d",&input);
    while(input>0)
    {
        temp=input%10;
        reverse=temp+reverse*10;
        input=input/10;
    }
        printf("%d",reverse);

}
