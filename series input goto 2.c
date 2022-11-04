#include<stdio.h>
void main()
{
    int i,num1,num2;
    printf("enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    i=num1;
asa:
    printf("%d\t",num1);
    num1++;

    if( num1<=num2)
    {
        goto asa;
    }
}
