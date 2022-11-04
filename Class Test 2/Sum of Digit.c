#include<stdio.h>

void main()
{
    int input =0;
    int sum = 0;
    int temp =0;
    scanf("%d",&input);
    while(input>0)
    {
        temp = input%10;
        input = input/10;
        sum = sum +temp;

    }
    printf("%d",sum);
}

