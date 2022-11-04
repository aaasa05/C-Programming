#include<stdio.h>
void main()
{

    int num1,num2;
    printf("enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    if(num1>num2)
        printf("large=%d\n",num1);
    else if(num1<num2)
        printf("large=%d\n",num2);
    else
        printf("numbers are equal");




}
