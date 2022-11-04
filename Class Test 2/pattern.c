/**print the pattern**/

#include<stdio.h>
void main()
{

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

 printf("\n---------------\n");

    for(int i=5;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    printf("\n");
    }
 printf("\n-----------------\n");


    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

 printf("\n-----------------\n");

    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }



for(int i=2;i>0;i--)
{
    for(int j=i;j>0;j--)
    {
        printf("*");
    }
    printf("\n");
}


}
