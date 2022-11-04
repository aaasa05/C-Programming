#include<stdio.h>
void main()
{
    int i,num1,num2;
    printf("enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    for(i=num1;i<=num2;i++)
    {
        printf("%d\t",i);
    }
}
