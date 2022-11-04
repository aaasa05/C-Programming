#include<stdio.h>
void main()
{
    int input= 0;
    int temp=0;
    int temp2=0;
    int reverse=0;
    int sum = 0;
    int number=0;
    printf("Enter a number: ");
    scanf("%d",&input);
    number = input;

    while(input>0)
    {
        temp=input%10;
        temp2 = temp*temp*temp;
        sum +=temp2;
        input=input/10;
    }
    if(sum==number){
        printf("\n%d is an Armstrong Number\n",number);
    } else {
        printf("\n%d is not an Armstrong Number\n",number);
    }

}
