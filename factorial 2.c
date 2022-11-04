#include<stdio.h>
int main()
{
    int num,i,fact=1;;
    scanf("%d",&num);
    for(i=num; i>=1; i--)
    {
        fact = fact*i;
        if(num>i && i>=1)
        {
            printf("*");

        }

        printf("%d",i);

    }
printf("%d! = ",num);=a
    printf(" = %d",fact);


    return 0;
}
