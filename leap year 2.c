#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("%d is a Leap year",year);
    }
    else if(year%4==0 && year%100!=0)
    {
        printf("%d is a leap year\n",year);
    }
    else
    {
        printf("%d is not a Leap year",year);
    }
    return 0;
}
